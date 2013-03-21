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
  e.affMonde(monde);

  return 0;
}
