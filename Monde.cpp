/* 
 * File:   Monde.cpp
 * Author: natha
 * 
 * Created on 27 février 2013, 10:04
 */

#include "Monde.h"

Monde::Monde()
{
  cout << "Création du Monde...\n";
  Position pos(1, 3);
  Element * elt = new Element(pos, "Toto");
  push_back(elt); //ajoute un élément dans le vecteur
  wMap.insert(pair<Position, unsigned>(pos, size() - 1)); // size() car Monde hérite de Vecteur
}

Monde::~Monde()
{
}

unsigned int
Monde::estValide(Position _pos) const
{
  unsigned int r = 0;
  map<Position, unsigned int>::const_iterator it;
  it = wMap.end();

  if (wMap.find(_pos) != it)
    r = 1;

  return r;
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

void
Monde::ajouter(Element * _elt)
{
  if (estValide(_elt->getPos()))
    {
      push_back(_elt); // ajoute un élément dans le vecteur
      wMap.insert(pair<Position, unsigned>(_elt->getPos(), size() - 1)); // size() car Monde hérite de Vecteur
    }
}

const map<Position, unsigned int>&
Monde::getMap() const
{
  return wMap;
}

const map<Position, unsigned int>&
Monde::getMap()
{
  return wMap;
}
