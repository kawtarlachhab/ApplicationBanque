#include "Virement.h"

CompteBancaire::Virement::Virement(Date* date, std::string libelle, Devise* montant, int num) :operation(date, libelle, montant, num)
{

}

CompteBancaire::Virement::~Virement()
{

}

void CompteBancaire::Virement::print() const
{

}
