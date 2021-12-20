#include "MAD.h"
#include <iostream>
CompteBancaire::MAD::MAD(double val) : Devise(val)
{
	//constructeur
}
CompteBancaire::MAD::~MAD()
{
	//destructeur de MAD 
}
void CompteBancaire::MAD::afficher() const
{
	this->Devise::afficher();
	std::cout << " MAD" << std::endl;
}