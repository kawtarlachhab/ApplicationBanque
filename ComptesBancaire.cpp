// ComptesBancaires.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "compte.h"
#include "client.h"
#include "Devise.h"
#include "Epagne.h"
#include"courant.h"
#include "Retrait.h"
#include "Virement.h"
#include "MAD.h"
#include <ctime>
#include "operation.h"
#include"Date.h"
#include "ComptePayant.h"
#include "Euro.h"
using namespace CompteBancaire;
using namespace std;
int main()
{
	Client* client = new Client("kawtar", "lachhab", "59 LOT EL FATH SIDI BENNOUR");


	Devise* Montant[100] = { 0 };
	Montant[0] = new MAD(10000);
	Montant[1] = new MAD(100);
	Montant[2] = new MAD(100);
	Montant[3] = new MAD(3000);
	Montant[4] = new MAD(3000);
	Montant[5] = new MAD(3000);
	Montant[6] = new MAD(3000);
	Montant[7] = new MAD(100);
	Montant[8] = new MAD(3000);
	Montant[9] = new MAD(3000);
	Montant[10] = new MAD(100);
	compte* Comptes[20] = { 0 };
	Comptes[0] = new courant(client,Montant[0], Montant[0]);
	Comptes[1] = new Epagne(client, Montant[2], 3.6);
	Comptes[2] = new ComptePayant(client, Montant[3], Montant[4]);
	//client->addCompte(*Comptes[0]);
	client->addCompte(*Comptes[1]);
	client->addCompte(*Comptes[2]);
    //Comptes[0]->Retrait(Montant[7]);
    Comptes[1]->Depot(Montant[4]);
	Comptes[2]->Depot(Montant[8]);
	Comptes[2]->Depot(Montant[9]);
	Comptes[1]->Depot(Montant[5]);
 	Comptes[2]->Retrait(Montant[10]);
	client->print();
	delete Comptes[0];
	client->print();
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
