#pragma once
#include "Devise.h"
#include <string>
namespace CompteBancaire
{
	class Dollard :
		public Devise
	{
	private:
	public:
	  Dollard(double);
	  ~Dollard();
	  void afficher() const;
	};

};

