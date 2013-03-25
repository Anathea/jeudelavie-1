/* 
 * File:   Test.cpp
 * Author: natha
 * 
 * Created on 12 mars 2013, 09:15
 */

#include "Test.h"
#include <iostream>

using namespace std;

Test::Test(Monde &_mondeTest) :
    mondeTest(_mondeTest)
{ 
  testCreation();
  testPosition();
  testDeplacement();
}

Test::~Test()
{
}

void
Test::testAffichage() const
{
  cout << "=== Démarrage test Affichage ===" << endl;
  Ecran e = new Monde(mondeTest);
  e.affMonde();
}

void
Test::testPosition() const
{
  Position posOK(1, 3);
  Position posNOK(1, 4);

  Monde monde;

  // cout << "=== Démarrage tests Position ===" << endl;
  if (monde.estValide(posOK))
    cout << "OK : position " << posOK << " valide" << endl;
  else
    cout << "NOK : position " << posOK << " invalide" << endl;

  if (!monde.estValide(posNOK))
    cout << "OK : position " << posNOK << " invalide" << endl;
  else
    cout << "NOK : position " << posNOK << " valide" << endl;
}

void
Test::testCreation()
{
  cout << "=== Démarrage tests Création d'éléments ===" << endl;
  Monde monde;
  monde.addRandomElements();
  monde.afficher();
}

void
Test::testDeplacement()
{
  // cout << "=== Démarrage tests Deplacement ===" << endl;
  Monde monde;
  // cout << "== Déplacement d'un Mobile ==" << endl;
  // cout << "- Création et ajout de Mobile1 en (3,1)" << endl;
  Position posMobile1(3, 1);
  Mobile mobile1(posMobile1, "Mobile1", 1, 1, &monde);
  monde.ajouter(&mobile1);
  // cout << "- Création et ajout de Mobile2 en (3,5)" << endl;
  Position posMobile2(3, 5);
  Mobile mobile2(posMobile2, "Mobile1", 1, 1, &monde);
  monde.ajouter(&mobile2);
  if (mobile1.seDeplacer(NORD))
    cout << "NOK : déplacement possible au nord, en haut de la map" << endl;
  else
    cout << "OK : déplacement impossible au nord, en haut de la map" << endl;
  if (mobile1.seDeplacer(SUD))
    cout << "OK : déplacement normal possible" << endl;
  else
    cout << "NOK : déplacement normal impossible" << endl;
  if (mobile1.seDeplacer(SUD))
    cout << "NOK : déplacement possible sur une place occupée" << endl;
  else
    cout << "OK : déplacement impossible, place occupée" << endl;
  Direction rDir = mobile2.getRandomDirection();
  if (mobile2.seDeplacer(SUD) && mobile2.seDeplacer(rDir))
    cout << "OK : déplacement aléatoire (" << rDir << ") possible" << endl;
  else
    cout << "NOK : déplacement aléatoire (" << rDir << ") impossible" << endl;
}
