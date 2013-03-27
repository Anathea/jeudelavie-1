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
  // Décommentez si nécessaire
  
  // testCreation();
  // testPosition();
  testVoir();
  // testDeplacement();
  // testAffichage();
}

Test::~Test()
{
}

void
Test::testVoir()
{
  Homme h = Homme(Position(4,4), 2, 3, 20, 50, &mondeTest);
  vector<Position> vp = h.voir();
  /*for (unsigned int i=0 ; i< vp.size() ; i++)
    cout << vp.at(i) << endl;*/
}

void
Test::testAffichage()
{
  cout << "=== Démarrage test Affichage ===" << endl;
  
  // cout << "position homme : [" << h.getPos().getX() << ";" << h.getPos().getY() << "]." << endl;

  Monde monde;
  monde.addRandomElements();
  
  Ecran e(&monde);
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
  
  // Position voisinN = posOK.getVoisin(_SUD);
  
  // cout << "Le voisin SUD de " << posOK.toString() << " est " << voisinN.toString() << endl;
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
  // cout << "== Déplacement d'un Homme ==" << endl;
  // cout << "- Création et ajout de Mobile1 en (3,1)" << endl;
  Position posHomme1(3, 1);
  Homme homme1(posHomme1, "Homme1", 1, 1, 25, 60, &monde);
  monde.ajouter(&homme1);
  // cout << "- Création et ajout de Mobile2 en (3,5)" << endl;
  Position posHomme2(3, 5);
  Homme homme2(posHomme2, "Homme1", 1, 1, 25, 60, &monde);
  monde.ajouter(&homme2);
  if (homme1.seDeplacer(NORD))
    cout << "NOK : déplacement possible au nord, en haut de la map" << endl;
  else
    cout << "OK : déplacement impossible au nord, en haut de la map" << endl;
  if (homme1.seDeplacer(SUD))
    cout << "OK : déplacement normal possible" << endl;
  else
    cout << "NOK : déplacement normal impossible" << endl;
  if (homme1.seDeplacer(SUD))
    cout << "NOK : déplacement possible sur une place occupée" << endl;
  else
    cout << "OK : déplacement impossible, place occupée" << endl;
  Direction rDir = homme2.getRandomDirection();
  if (homme2.seDeplacer(SUD) && homme2.seDeplacer(rDir))
    cout << "OK : déplacement aléatoire (" << rDir << ") possible" << endl;
  else
    cout << "NOK : déplacement aléatoire (" << rDir << ") impossible" << endl;
}
