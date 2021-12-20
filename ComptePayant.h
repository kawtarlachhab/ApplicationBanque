#pragma once
#include "courant.h"
namespace CompteBancaire
{
class ComptePayant :    virtual public courant
{
private:
	static float tarif;
public:
	 ComptePayant(Client*, Devise*,Devise*);
	~ComptePayant();
	void print() const;
	void Retrait(Devise* Montant);
};
};


