#include <cstdlib>
#include <iostream>
#include "Monde.h"
#include "Position.h"
#include "Test.h"
#include "Ecran.h"
#include "Parametres.h"

using namespace std;

int
main(int argc, char** argv)
{
  cout << "Lancement du programme\n";
  Monde monde;
  Test test(monde);

  return 0;

}
