#include "Euro.h"
#include <iostream>
CompteBancaire::Euros::Euros(double val):Devise(val)
{
}

CompteBancaire::Euros::~Euros()
{
	
}
void CompteBancaire::Euros::afficher() const
{
	this->Devise::afficher(); std::cout << "EURO";
}
