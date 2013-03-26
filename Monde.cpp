/* 
 * File:   Monde.cpp
 * Author: natha
 * 
 * Created on 27 février 2013, 10:04
 */

#include "Monde.h"
#include "Mobile.h"
#include "Element.h" // Contre problème d'inclusion cyclique
using namespace std;

Monde::Monde()
{
  srand(time(NULL));
  cout << "Création du Monde...\n";
}

Monde::~Monde()
{
}

bool
Monde::estValide(Position _pos) const
{
  bool outOfMap = false;
  bool occupied = false;
  map<Position, unsigned int>::const_iterator it;

  if (_pos.getX() < 0 || _pos.getX() > this->getL()
      || _pos.getY() < 0 || _pos.getY() > this->getH())
    outOfMap = true;

  if (wMap.find(_pos) != wMap.end())
    occupied = true;

  return (_pos.estValide() && !occupied && !outOfMap);
}

void
Monde::afficher() const
{
  cout << "Vector : " << endl;
  for (unsigned i = 0; i < size(); i++)
    at(i)->afficher();
  cout << "Map : " << endl;
  map<Position, unsigned int>::const_iterator Iter;
  for (Iter = getMap().begin(); Iter != getMap().end(); Iter++)
    cout << Iter->first << " " << Iter->second << endl;
}

int
Monde::getL() const
{
  return param.getValeurParametre("l_carte");
}

int
Monde::getH() const
{
  return param.getValeurParametre("h_carte");
}

void
Monde::ajouter(Element *_elt)
{
  if (estValide(_elt->getPos()))
    {
      push_back(_elt); // ajoute un élément dans le vecteur
      wMap.insert(pair<Position, unsigned int>(_elt->getPos(), size() - 1)); // size() car Monde hérite de Vecteur
    }
}

Position
Monde::posAleatoire() const
{
  return (Position(1 + rand() % this->getL(),
      1 + rand() % this->getH()));
}

const map<Position, unsigned int>&
Monde::getMap() const
{
  return wMap;
}

map<Position, unsigned int>&
Monde::getMap()
{
  return wMap;
}

void
Monde::addRandomElements()
{
  int nbMobile = param.getValeurParametre("nb_mobile");
  Position pos;
  for(int i = 0;i<nbMobile;i++) {
      // On cherche une position inocuppée
      do {
          pos = posAleatoire();
      } while(!estValide(pos));
      // On ajoute dans le monde
      ajouter(new Mobile(pos, Element::getRandomName(), 1, 1, this));
  }
}

Parametres
Monde::getParam() const
{
  return param;
}