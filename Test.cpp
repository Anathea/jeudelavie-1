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
  // testSuppression();
  // testPosition();
  // testgetElByPos();
  // testgetVoisin();
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
  Homme h1(Position(2,2), 1, 1, 25, 60, &mondeTest);
  mondeTest.ajouter(&h1);

  Homme h2(Position(3,3), 1, 1, 25, 60, &mondeTest);
  mondeTest.ajouter(&h2);
  
  Homme h3(Position(2,0), 1, 1, 25, 60, &mondeTest);
  mondeTest.ajouter(&h3);
  
  vector<Element*> vect = h1.voir();
  
  cout << "Elements à proximité :" << endl;
  for (unsigned int i=0 ; i< vect.size() ; i++)
    cout << vect.at(i)->toString() << endl;
}

void
Test::testgetElByPos()
{
  cout << "=== Démarrage test getElByPos ===" << endl;
  Homme h1(Position(0,0), 1, 1, 25, 60, &mondeTest);
  Homme h2(Position(3,3), 1, 1, 25, 60, &mondeTest);
  mondeTest.ajouter(&h1);
  mondeTest.ajouter(&h2);
  
  Element *eltOK1 = mondeTest.getElbyPos(Position(0,0));
  Element *eltOK2 = mondeTest.getElbyPos(Position(3,3));
  Element *eltNOK = mondeTest.getElbyPos(Position(2,0));
  
  cout << "À la position (0,0), il y a : " << eltOK1->toString() << endl;
  cout << "À la position (3,3), il y a : " << eltOK2->toString() << endl;
  cout << "À la position (2,0), il y a : " << eltNOK->toString() << endl;
}

void
Test::testgetVoisin()
{
  cout << "=== Démarrage test getVoisin===" << endl;
  Homme h1(Position(2,2), 1, 1, 25, 60, &mondeTest);
  mondeTest.ajouter(&h1);

  Homme h2(Position(3,3), 1, 1, 25, 60, &mondeTest);
  mondeTest.ajouter(&h2);
  
  Homme h3(Position(2,0), 1, 1, 25, 60, &mondeTest);
  mondeTest.ajouter(&h3);

  cout << "Le voisin NORD de " << h1.toString() << " est " << h1.getVoisin(NORD)->toString() << endl;
  cout << "Le voisin NORDEST de " << h1.toString() << " est " << h1.getVoisin(NORDEST)->toString() << endl;
  cout << "Le voisin SUDEST de " << h1.toString() << " est " << h1.getVoisin(SUDEST)->toString() << endl;
  cout << "Le voisin SUD de " << h1.toString() << " est " << h1.getVoisin(SUD)->toString() << endl;
  cout << "Le voisin SUDOUEST de " << h1.toString() << " est " << h1.getVoisin(SUDOUEST)->toString() << endl;
  cout << "Le voisin NORDOUEST de " << h1.toString() << " est " << h1.getVoisin(NORDOUEST)->toString() << endl;
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
  Position posOK(2, 0);
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
Test::testSuppression()
{
  Monde monde;
  Homme homme1(&monde);
  Homme homme2(&monde);
  monde.ajouter(&homme1);
  monde.ajouter(&homme2);
  monde.deleteElement(homme1.getPos());
  if(monde.getMap().find(homme1.getPos()) == monde.getMap().end())
    cout << "OK : élément supprimé dans la map" << endl;
  else
    cout << "NOK : élément non supprimé dans la map" << endl;
  if(monde.getMap().find(homme2.getPos()) != monde.getMap().end() && monde.getMap().at(homme2.getPos()) == 0)
    cout << "OK : élément décalé dans la map" << endl;
  else
    cout << "NOK : élément non décalé dans la map" << endl;
  if(monde.size() == 1)
    cout << "OK : élément supprimé du vecteur" << endl;
  else
    cout << "NOK : élément non supprimé du vecteur" << endl;
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
