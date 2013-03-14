/* 
 * File:   Mobile.cpp
 * Author: natha
 * 
 * Created on 27 février 2013, 10:07
 */

#include "Mobile.h"

Mobile::Mobile(const unsigned int _vitesse = 1) : vitesse(_vitesse)
{
}

Mobile::~Mobile()
{
}

void Mobile::SeDeplacer(Position _pos) {

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
