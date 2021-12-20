#include "Date.h"
#include <ctime>
#include <iostream>
using namespace std;
CompteBancaire::Date::Date()
{
	time_t now = time(0);
	struct tm ltm;
	localtime_s(&ltm, &now);
	this->annee = 1900 + ltm.tm_year;
	this->jour  = ltm.tm_mday; 
	this->mois  = 1 + ltm.tm_mon;
}
void CompteBancaire::Date::date_Aujourdhui() const
{
  cout << this->jour << "/" << this->mois << "/" << this->annee << " ";
}
