#include <cstdlib>
#include <iostream>
#include "Monde.h"
#include "Position.h"
#include "Test.h"

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
  
  return 0;
}
