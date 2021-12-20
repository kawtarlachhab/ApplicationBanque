#pragma once
#include <string>
namespace CompteBancaire
{
	class Devise
	{
	private:
		long double valeur;
	public:
		Devise(double val);
		Devise& operator+(const Devise& M) const;
		Devise& operator-(const Devise& M) const;
		Devise& operator*(const Devise& M) const;
		Devise& operator*(float) const;
		Devise& operator/(int) const;
		bool operator<=(const Devise& M)const;
		bool operator>=(const Devise& M) const;
		virtual void afficher() const;
		void Euro_To_MAD();
		void Dollard_To_MAD();
	};
};


