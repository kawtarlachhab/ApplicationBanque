#include "compte.h"
#include "client.h"
#include "Devise.h"
#include <iostream>
#include <vector>
#include <ctime>
#include "operation.h"
#include "Retrait.h"
#include "Virement.h"
#include "Date.h"

#include <assert.h>
using namespace std;
using namespace CompteBancaire;
int CompteBancaire::compte::count = 0;
Devise* CompteBancaire::compte::plafond = new Devise(2000);
CompteBancaire::compte::compte(Client* client, Devise* sol):numcompte(++count)
{
	this->solde = sol;
	this->titulaire = client;
	this->Historique = new std::vector <operation*>(); 
}
CompteBancaire::compte::~compte()
{
	this->titulaire->delete_compte(*this);
	if ( this->titulaire!=nullptr && this->titulaire->Empty_list_comptes()==true)
	{
		delete this->titulaire;
		this->titulaire = 0;
	}
	delete this->Historique;
	this->Historique = 0;
}
void CompteBancaire::compte::print() const
{
	    int op = 1;
	    std::cout<< "n Compte: " << this->numcompte ;
		std::cout << "|solde: ";
		this->solde->afficher();
		for (int h = 0; h < this->Historique->size(); h++)
		{
			if (op == 1) { std::cout << "Transactions: "<< std::endl; op = 0; }
			(*this->Historique)[h]->operation::print();
			std::cout << "------------------------------------------" << std::endl;
		}
}
 void CompteBancaire::compte::Retrait(Devise* Montant)
{
	 if ((*this->solde) >= *Montant && (*Montant <= *compte::plafond))
	 {
		 *(this->solde) = *(this->solde) - *Montant;
		 Date* Today = new Date();
		 Retirer* Retrait = new Retirer(Today, "-", Montant,(int)this->Historique->size() + 1);
		 this->Historique->push_back(Retrait);
	 }
}
void CompteBancaire::compte::Depot(Devise* Montant)
{
	*(this->solde) = *(this->solde) + *Montant;
	Date* Today = new Date();
	Virement* virement = new Virement(Today, "+", Montant, (int)this->Historique->size() + 1);
	this->Historique->push_back(virement);
}
void CompteBancaire::compte::addoperation(operation& operation)
{
	this->Historique->push_back(&operation);
}
bool CompteBancaire::compte::Min_solde(Devise* s) const
{
	return (*(this->solde) >= *s);
}
bool CompteBancaire::compte::Moitie_solde(Devise* s) const
{
	return ((*(this->solde)/ 2) >= *s) ;
}
void CompteBancaire::compte::tarif_retrait(float tarif, Devise* Montant)
{
	(*this->solde) = (*this->solde) - (*Montant) * tarif;
}
Devise& CompteBancaire::compte::Intérêt(double a) const
{
	Devise* res = new Devise(a);
	return *(this->solde) * (*res);
}