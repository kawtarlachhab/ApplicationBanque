#pragma once
#include "operation.h"
namespace CompteBancaire
{
	class Virement :public operation
	{
	public:
	     Virement (Date*, std::string, Devise*, int num);
		~Virement ();
		void print() const;
	private:

	};
};
