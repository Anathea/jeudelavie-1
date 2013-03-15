/*
 * Ressource.cpp
 *
 *  Created on: 28 févr. 2013
 *      Author: thomas
 */

#include "Ressource.h"

Ressource::Ressource() :
    Element()
{
}

Ressource::Ressource(const Element & _elt) :
    Element(_elt)
{
  cout << "Création d'une ressource...\n";
}

Ressource::Ressource(const Position& _pos, const string& _nom) :
    Element(_pos, _nom)
{
}

Ressource::Ressource(const unsigned int& _posX, const unsigned int& _posY,
    const string& _nom) :
    Element(_posX, _posY, _nom)
{
}

Ressource::~Ressource()
{
  // TODO Auto-generated destructor stub
}

