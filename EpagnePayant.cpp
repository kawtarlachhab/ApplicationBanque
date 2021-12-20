#include "EpagnePayant.h"

CompteBancaire::EpagnePayant::EpagnePayant(Client* C, Devise* D, double t,Devise * D2):compte(C,D),courant(C,D,D2),ComptePayant(C,D,D2),Epagne(C,D,t)
{
}

CompteBancaire::EpagnePayant::~EpagnePayant()
{
   
}

void CompteBancaire::EpagnePayant::print() const
{
}

void CompteBancaire::EpagnePayant::Retrait(Devise* Montant)
{

}
