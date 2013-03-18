#include <cstdlib>
#include <iostream>
#include "Monde.h"
#include "Position.h"
#include "Test.h"
#include "Ecran.h"

using namespace ::std;

/*
 * 
 */
int
main(int argc, char** argv)
{
  cout << "Lancement du programme\n";
  Test test;

  Monde monde;
  monde.afficher();
  
  Ecran e;
  e.affElement(2, Position(1,3)); // homme
  e.affElement(3, Position(8,4)); // femme
  e.affElement(4, Position(5,9)); // ressource immobile
  e.affElement(5, Position(4,4)); // ressource mobile
  
  e.txtPos(0, 11);

  return 0;
}
