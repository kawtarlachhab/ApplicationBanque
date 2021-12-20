#include "ComptePayant.h"
#include "Devise.h"
#include <iostream>
float CompteBancaire::ComptePayant::tarif = 0.5;
CompteBancaire::ComptePayant::ComptePayant(Client* client, Devise* Montant, Devise* decouvert):compte(client,Montant),courant(client, Montant, decouvert)
{
}
CompteBancaire::ComptePayant::~ComptePayant()
{

}
void CompteBancaire::ComptePayant::print() const
{
  //  this->co::print();
	//std::cout << "Tarif" << this->tarif;
}

void CompteBancaire::ComptePayant::Retrait(Devise* Montant)
{
	this->courant::Retrait(Montant);
	this->tarif_retrait(this->tarif, Montant);
}
