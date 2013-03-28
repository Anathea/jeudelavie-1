/* 
 * File:   Monde.cpp
 * Author: natha
 * 
 * Created on 27 février 2013, 10:04
 */

#include "Monde.h"
#include "Element.h" // Contre problème d'inclusion cyclique
#include "Arbre.h"
#include "Baie.h"
#include "Lapin.h"
#include "Sanglier.h"
#include "Homme.h"
#include "Femme.h"

using namespace std;

Monde::Monde()
{
  srand(time(NULL));
}

Monde::~Monde()
{
}

// Retourne un élement à partir de son id
Element*
Monde::getElbyPos(Position pos) const
{
  bool trouve = false;
  unsigned int i = 0;
  
  // On parcours les élements du monde
  while (!trouve && i < this->size())
  {
    // Si un des élements est égal à la position recherchée, on a trouvé
    if(this->at(i)->getPos().isEqual(pos))
      trouve = true;
  }
  
  if (trouve)
    return this->at(i);
  else
    return NULL;
}

bool
Monde::estValide(Position _pos) const
{
  bool outOfMap = false;
  bool occupied = false;
  map<Position, unsigned int>::const_iterator it;

  if (_pos.getX() < 0 || _pos.getX() > this->getL() || _pos.getY() < 0
      || _pos.getY() > this->getH())
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
    cout << at(i)->toString() << endl;
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
  return (Position(1 + rand() % this->getL(), 1 + rand() % this->getH()));
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
  Arbre::addRandomArbres(this);
  Baie::addRandomBaies(this);
  Lapin::addRandomLapins(this);
  Sanglier::addRandomSangliers(this);
  Homme::addRandomHommes(this);
  Femme::addRandomFemmes(this);
}

Parametres
Monde::getParam() const
{
  return param;
}

int
Monde::getRandomInt(const unsigned int nb1, const unsigned int nb2)
{
  return nb1+rand()%nb2;
}
