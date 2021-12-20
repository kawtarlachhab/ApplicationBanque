#include "Devise.h"
#include <iostream>
using namespace std;
CompteBancaire::Devise::Devise(double val)
{
	this->valeur = val;
}

CompteBancaire::Devise& CompteBancaire::Devise::operator+(const Devise& M) const
{
	Devise* res = new Devise(this->valeur + M.valeur);
	return *res;
}

CompteBancaire::Devise& CompteBancaire::Devise::operator-(const Devise& M) const
{
	Devise* res = new Devise(this->valeur - M.valeur);
	return *res;
}

CompteBancaire::Devise& CompteBancaire::Devise::operator*(const Devise& M) const
{
	Devise* res = new Devise(M.valeur * this->valeur);
	return *res;
}
CompteBancaire::Devise& CompteBancaire::Devise::operator*(float b) const
{
	Devise* devise = new Devise(this->valeur*b);
	return *devise;
}
CompteBancaire::Devise& CompteBancaire::Devise::operator/(int a) const
{
	   Devise* devise = new Devise(this->valeur/a);
	   return *devise;
}
bool CompteBancaire::Devise::operator<=(const Devise& M) const
{
	return this->valeur <= M.valeur;
}
bool CompteBancaire::Devise::operator>=(const Devise& M) const
{
	return this->valeur >= M.valeur;
}
void CompteBancaire::Devise::afficher() const
{
	cout<< this->valeur;
}

void CompteBancaire::Devise::Euro_To_MAD()
{

}

void CompteBancaire::Devise::Dollard_To_MAD()
{
}
