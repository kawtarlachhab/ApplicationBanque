#pragma once
#include "compte.h"
namespace CompteBancaire
{

	class Epagne : virtual public compte
	{
	private:
		double TauxInter�t;
	public:
	   Epagne(Client* C, Devise* D, double t);
	   ~Epagne();
	    void calculInt�r�t(double);
		void Retrait(Devise* Montant);
		void print() const;
	};
};


