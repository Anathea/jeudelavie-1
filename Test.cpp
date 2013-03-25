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
  testPosition();
  testDeplacement();

  cout << "Ajout de 3 éléments en (1;3), (4;4), (7,5)" << endl;
  Mobile *m = new Mobile(1, 3, "Jean", &mondeTest);
  mondeTest.ajouter(m);
  m->seDeplacer();
  /*
  Homme *h = new Homme(1, 3, "Jean", &mondeTest);
  Femme *f = new Femme(4, 4, "Marie", &mondeTest);
  Arbre *a = new Arbre(7, 5, &mondeTest);
  Baie *b = new Baie(8, 2, &mondeTest);
  Sanglier *s = new Sanglier(7, 5, &mondeTest);
  Lapin *l = new Lapin(7, 5, &mondeTest);
  
  mondeTest.ajouter(h);
  mondeTest.ajouter(f);
  mondeTest.ajouter(a);
  mondeTest.ajouter(b);
  mondeTest.ajouter(s);
  mondeTest.ajouter(l);
*/
  mondeTest.afficher();
  
  testAffichage();
}

Test::~Test()
{
}

void
Test::testAffichage() const
{
  cout << "=== Démarrage test Affichage ===" << endl;
  Ecran e = new Monde(mondeTest);
  e.affMonde(mondeTest);
}

void
Test::testPosition() const
{
  Position posOK(1, 3);
  Position posNOK(1, 4);

  Monde monde;

  cout << "=== Démarrage tests Position ===" << endl;
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
Test::testDeplacement()
{
  cout << "=== Démarrage tests Deplacement ===" << endl;
  Monde monde;
  cout << "== Déplacement d'un Mobile ==" << endl;
  cout << "- Création et ajout de Mobile1 en (3,1)" << endl;
  Position posMobile1(3,1);
  Mobile mobile1(posMobile1, "Mobile1", 1, 1, &monde);
  monde.ajouter(&mobile1);
  cout << "- Création et ajout de Mobile2 en (3,5)" << endl;
  Position posMobile2(3,5);
  Mobile mobile2(posMobile2, "Mobile1", 1, 1, &monde);
  monde.ajouter(&mobile2);
  if(mobile1.seDeplacer(NORD))
    cout << "NOK : déplacement possible au nord, en haut de la map" << endl;
  else
    cout << "OK : déplacement impossible au nord, en haut de la map" << endl;
  if(mobile1.seDeplacer(SUD))
    cout << "OK : déplacement normal possible" << endl;
  else
    cout << "NOK : déplacement normal impossible" << endl;
  if(mobile1.seDeplacer(SUD))
    cout << "NOK : déplacement possible sur une place occupée" << endl;
  else
    cout << "OK : déplacement impossible, place occupée" << endl;
}
