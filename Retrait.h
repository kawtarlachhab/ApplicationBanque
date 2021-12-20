#pragma once
#include "operation.h"
#include <string>
namespace CompteBancaire
{
	class Retirer : public operation
	{
	private:

	public:
	    	Retirer(Date*, std::string, Devise*,int num);
		 ~Retirer();
		 void print()const;
	};
};


