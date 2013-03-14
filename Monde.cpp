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
  Position pos(1,3);
  Element * elt = new Element(pos, "Toto");
  push_back(elt); //ajoute un élément dans le vecteur
  carte.insert(pair<Position, unsigned> (pos, size()-1)); // size() car Monde hérite de Vecteur
}

Monde::~Monde()
{
}

unsigned int
Monde::estValide(Position _pos) const
{
  unsigned int r = 0;
  map<Position, unsigned int>::const_iterator it;
  it = carte.end();
  
  if (carte.find(_pos) != it)
    r = 1;
  
  return r;
}

void
Monde::ajouter(Element * _elt)
{
  if (estValide(_elt->getPos()))
  {
    push_back(_elt); // ajoute un élément dans le vecteur
    carte.insert(pair<Position, unsigned> (_elt->getPos(), size()-1)); // size() car Monde hérite de Vecteur
  }
}


