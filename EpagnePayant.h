#pragma once
#include "ComptePayant.h"
#include "Epagne.h"
namespace CompteBancaire
{
	class EpagnePayant : public ComptePayant, public Epagne
	{
	public:
		EpagnePayant(Client* C, Devise* D, double t, Devise* D2);
		~EpagnePayant();
		 void print() const;
		 void Retrait(Devise* Montant);
	};
};


