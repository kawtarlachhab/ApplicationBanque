#pragma once
#include "compte.h"
namespace CompteBancaire
{

	class Epagne : virtual public compte
	{
	private:
		double TauxInterêt;
	public:
	   Epagne(Client* C, Devise* D, double t);
	   ~Epagne();
	    void calculIntérêt(double);
		void Retrait(Devise* Montant);
		void print() const;
	};
};


