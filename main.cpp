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
  e.txtColor("Oh ", 1);
  e.txtColor("comme ", 2);
  e.txtColor("c'est ", 4);
  e.txtColor("joli !", 5);
  
  return 0;
}
