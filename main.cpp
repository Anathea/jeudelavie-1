#include <cstdlib>
#include <iostream>
#include "Monde.h"
#include "Position.h"
#include "Test.h"
#include "Ecran.h"
#include "Parametres.h"
#include "Homme.h"
#include "Femme.h"
#include "RessourceFixe.h"
#include "RessourceMobile.h"

using namespace std;
/*
 * 
 */
int
main(int argc, char** argv)
{
  cout << "Lancement du programme\n";
  Monde monde;
  Test test(monde);
  Ecran e;
  monde.ajouter(Homme());
  monde.ajouter(Femme());
  monde.ajouter(RessourceFixe());
  monde.ajouter(RessourceMobile());
  e.affMonde(monde);

  return 0;

}
