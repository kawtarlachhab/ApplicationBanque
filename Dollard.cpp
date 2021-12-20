#include "Dollard.h"
#include <iostream>

CompteBancaire::Dollard::Dollard(double val): Devise(val)
{
	std::string type = "MAD";
}
CompteBancaire::Dollard::~Dollard()
{
}

void CompteBancaire::Dollard::afficher() const
{
	this->Devise::afficher();
	std::cout << "$";
}
