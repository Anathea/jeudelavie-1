/* 
 * File:   Mobile.cpp
 * Author: natha
 * 
 * Created on 27 février 2013, 10:07
 */

#include "Mobile.h"

Mobile::Mobile(Monde * _monde, const unsigned int _vitesse) :
    Element(), monde(_monde), vitesse(_vitesse)
{
}

Mobile::Mobile(const Element & _elt, Monde * _monde,
    const unsigned int & _vitesse) :
    Element(_elt), monde(_monde), vitesse(_vitesse)
{
}

Mobile::Mobile(const Position & _pos, const string & _nom, Monde * _monde,
    const unsigned int & _vitesse) :
    Element(_pos, _nom), monde(_monde), vitesse(_vitesse)
{
}

Mobile::Mobile(const unsigned int & _posX, const unsigned int & _posY,
    const string & _nom, Monde * _monde, const unsigned int & _vitesse) :
    Element(_posX, _posY, _nom), monde(_monde), vitesse(_vitesse)
{
}

Mobile::~Mobile()
{
}

/*void Mobile::SeDeplacer(Position _pos) {

 }*/

Monde *
Mobile::getMonde() const
{
  return monde;
}

void
Mobile::setMonde(Monde * _monde)
{
  *monde = *_monde;
}

unsigned int
Mobile::getVitesse() const
{
  return vitesse;
}

void
Mobile::setVitesse(const unsigned int _vitesse)
{
  vitesse = _vitesse;
}
