#include "operation.h"
#include "Devise.h"
#include <iostream>
//int CompteBancaire::operation::auto_increment = 0;
CompteBancaire::operation::operation(Date* date, std::string libelle, Devise* Mantant, int n)
{
	this->date = date;
	this->Montant = Mantant;
	this->libelle = libelle;
	this->numOperation = n;
}

CompteBancaire::operation::~operation()
{
	//destructeur operation
}
void CompteBancaire::operation::print()const
{
	this->date->date_Aujourdhui();
	std::cout << "|n " << this->numOperation << "||" << this->libelle;
	this->Montant->afficher();
}
