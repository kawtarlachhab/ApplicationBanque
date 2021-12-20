#pragma once
#include "compte.h"
namespace CompteBancaire
{
	class courant : virtual public compte
	{
	private:
		Devise* decouvert;
	public:
	     courant(Client*, Devise*,Devise*);
		~courant();
		 virtual void Retrait(Devise* Montant) ;
		 virtual void print() const;
	};
};


