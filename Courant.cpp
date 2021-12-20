#include "Courant.h"
#include "Devise.h"
#include <iostream>
CompteBancaire::courant::courant(Client* titulaire, Devise* Montant, Devise* decouvert) : compte(titulaire, Montant)
{
	this->decouvert = decouvert;
}

CompteBancaire::courant::~courant()
{
	std::cout << "destructeur compte courant";

}
void CompteBancaire::courant::Retrait(Devise* Montant)
{	
	if (this->Min_solde(&(*Montant + *(this->decouvert))))
	{
		this->compte::Retrait(Montant);
	}
}

void CompteBancaire::courant::print() const
{
	std::cout << "compte courant:" << " ";
	this->compte::print();
}

