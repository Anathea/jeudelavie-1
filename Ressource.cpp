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
  valRessource = _monde->getRandomInt(_monde->getParam().getValeurParametre("min_ressource_init"), _monde->getParam().getValeurParametre("max_ressource_init"));
}

Ressource::Ressource(const Element & _elt) :
    Element(_elt)
{
}

Ressource::Ressource(const Position &_pos, Monde *_monde) :
    Element(_pos, _monde)
{
  valRessource = _monde->getRandomInt(_monde->getParam().getValeurParametre("min_ressource_init"), _monde->getParam().getValeurParametre("max_ressource_init"));
}

Ressource::Ressource(const Position& _pos, const string& _nom, Monde *_monde) :
    Element(_pos, _nom, _monde)
{
  valRessource = _monde->getRandomInt(_monde->getParam().getValeurParametre("min_ressource_init"), _monde->getParam().getValeurParametre("max_ressource_init"));
}

Ressource::Ressource(const unsigned int& _posX, const unsigned int& _posY,
    const string& _nom, Monde *_monde) :
    Element(_posX, _posY, _nom, _monde)
{
  valRessource = _monde->getRandomInt(_monde->getParam().getValeurParametre("min_ressource_init"), _monde->getParam().getValeurParametre("max_ressource_init"));
}

void
Ressource::agir() const
{
}

Ressource::~Ressource()
{
  // TODO Auto-generated destructor stub
}

