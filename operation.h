#pragma once
#include <string>
#include "Date.h"
namespace CompteBancaire
{
	class Devise;
	class operation
	{
	private:
		//static int ;
		int numOperation;
	    Date* date;
		std::string libelle;
		Devise* Montant;
	public:
		operation(Date*,std::string,Devise*, int n);
		~operation();
		virtual void print()const=0;///methode virtuelle pure  => class abstrute;
	};
};


