/*
 * Ressource.cpp
 *
 *  Created on: 28 févr. 2013
 *      Author: thomas
 */

#include "Ressource.h"

using namespace std;

Ressource::Ressource(Monde *_monde) :
    Element(_monde)
{
}

Ressource::Ressource(const Element & _elt) :
    Element(_elt)
{
  cout << "Création d'une ressource...\n";
}

Ressource::Ressource(const Position& _pos, const string& _nom, Monde *_monde) :
    Element(_pos, _nom, _monde)
{
}

Ressource::Ressource(const unsigned int& _posX, const unsigned int& _posY,
    const string& _nom, Monde *_monde) :
    Element(_posX, _posY, _nom, _monde)
{
}

Ressource::~Ressource()
{
  // TODO Auto-generated destructor stub
}

