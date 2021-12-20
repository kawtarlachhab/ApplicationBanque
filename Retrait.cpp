#include "Retrait.h"
#include <iostream>
CompteBancaire::Retirer::Retirer(Date* date, std::string lib, Devise* montant,int num) :operation(date, lib, montant,num)
{

}

CompteBancaire::Retirer::~Retirer()
{

}

void CompteBancaire::Retirer::print() const
{
}
