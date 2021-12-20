#include "Epagne.h"
#include <iostream>
#include <assert.h>
CompteBancaire::Epagne::Epagne(Client* c, Devise* d, double taux):compte(c,d)
{
	assert(taux > 0 && taux <= 100);
	this->TauxInter�t = taux;
}

CompteBancaire::Epagne::~Epagne()
{
  
}

void CompteBancaire::Epagne::calculInt�r�t(double Taux)
{
	this->Depot(&(this->Int�r�t(Taux)));
}
void CompteBancaire::Epagne::Retrait(Devise* Montant)
{
	if (this->Moitie_solde(Montant)) this->compte::Retrait(Montant);
}
void CompteBancaire::Epagne::print() const
{
	std::cout << "compte Epagne:" << " ";
	this->compte::print();
	std::cout << "taux interet : " << this->TauxInter�t << std::endl << std::endl;
}
