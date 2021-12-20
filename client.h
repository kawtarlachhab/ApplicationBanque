#pragma once
#include <string>
#include <vector>
#include "compte.h"
namespace CompteBancaire
{
	class Client
	{
	private:
		std::string non;
		std::string prenom;
		std::string adress;
		std::vector <compte*>* listesComptes;
	public:
	  Client(std::string, std::string, std::string);
	  ~Client();
	   void print() const;
	   void addCompte(compte& Compte);
	   void delete_compte(compte& Compte);
	  bool Empty_list_comptes();
	};
};
