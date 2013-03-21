#include <cstdlib>
#include <iostream>
#include "Monde.h"
#include "Position.h"
#include "Test.h"
#include "Ecran.h"
#include "Parametres.h"

using namespace std;

/*
 * 
 */
int
main(int argc, char** argv)
{
  /*
  cout << "Lancement du programme\n";
  Test test;

  Monde monde;
  Ecran e;
  e.affMonde(monde);

  return 0;
  */
  Parametres param;

  cout << param.getValeurParametre("tpause") << endl;
  param.setValeurParam("tpause", 25);
  cout << param.getValeurParametre("tpause") << endl;
  return 0;
}
