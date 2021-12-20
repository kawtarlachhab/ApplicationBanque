#include "client.h"
#include <iostream>
CompteBancaire::Client::Client(std::string non, std::string prenom, std::string adress)
{
	this->non = non;
	this->prenom = prenom;
	this->adress = adress;
	this->listesComptes = new std::vector <compte*> ();
}
CompteBancaire::Client::~Client()
{
	delete this->listesComptes;
	this->listesComptes = 0;
}
void CompteBancaire::Client::print() const
{
	std::cout <<"Nom: " << this->non << "|Prenom: " << this->prenom << "|Adress:  " << this->adress << std::endl << std::endl;
	for (int j = 0; j <this->listesComptes->size(); j++)
	{
		(*this->listesComptes)[j]->compte::print();
	}
} 
void CompteBancaire::Client::addCompte(CompteBancaire::compte& Compte)
{
	this->listesComptes->push_back(&Compte);
} 
void CompteBancaire::Client::delete_compte(compte& Compte)
{
	for (int j = 0; j < this->listesComptes->size(); j++)
	{
		if ((*this->listesComptes)[j] == &Compte)
		{
			(*this->listesComptes).erase((*this->listesComptes).begin() + j);
		}
	}
}

bool CompteBancaire::Client::Empty_list_comptes()
{
	if (this->listesComptes->empty()) return true;
	return false;
}



