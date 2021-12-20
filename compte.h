#pragma once
#include <vector>
namespace CompteBancaire
{
	class operation;
	class Devise;
	class Client;
	class GC;
    class  compte
	{
	private:
	 	 const int numcompte;
		 static int count;
		 Client* titulaire; 
		 Devise* solde;
		 static Devise* plafond;
		 GC* ref;
		 std::vector <operation*> *Historique; //liste des operation
	public:
		 compte(Client*, Devise*);
		 compte(const compte& c);
		 ~compte();
		 virtual void print() const;//methode virtuelle pur pour rendre la class abstraite
		 virtual void Retrait(Devise* Montant);
		 void Depot(Devise* Montant);
		 void addoperation(operation& operation);//associe une operation à un compte
	     protected: Devise& Intérêt(double a) const;
	     protected: bool Min_solde(Devise* s) const;
	     protected: bool Moitie_solde(Devise* s)const;
	     protected: void tarif_retrait(float, Devise*);
	};
};
