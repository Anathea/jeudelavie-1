/* 
 * File:   Mobile.cpp
 * Author: natha
 * 
 * Created on 27 février 2013, 10:07
 */

#include "Mobile.h"

Mobile::Mobile() :
    Element(),vision(1) ,vitesse(1)
{
}

Mobile::Mobile(const Element & _elt,
    const unsigned int _vitesse , const unsigned int _vision) :
    Element(_elt),vision(_vision) ,vitesse(_vitesse)
{
  cout << "Création d'un element Fixe...\n";
}

Mobile::Mobile(const Position& _pos, const string& _nom,
    const unsigned int _vitesse , const unsigned int _vision) :
    Element(_pos, _nom),vision(_vision) ,vitesse(_vitesse)
{
}

Mobile::Mobile(const unsigned int& _posX, const unsigned int& _posY, const string& _nom,
    const unsigned int _vitesse , const unsigned int _vision):
        Element(_posX,_posY,_nom),vision(_vision) ,vitesse(_vitesse)
{
}

Mobile::~Mobile()
{
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

unsigned int
Mobile::getVision() const
{
  return vision;
}

void
Mobile::setVision(const unsigned int _vision)
{
  vision = _vision;
}

        
