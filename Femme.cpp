/* 
 * File:   Femme.cpp
 * Author: natha
 * 
 * Created on 22 mars 2013, 08:14
 */

#include "Femme.h"

Femme::Femme(Monde *_monde) :
    Humain(_monde), enceinte(false)
{
}

Femme::Femme(const Position& _pos, const unsigned int _vitesse,
    const unsigned int _vision, const unsigned int _age,
    const unsigned int _vie, const unsigned int _espVie, Monde* _monde) :
    Humain(_pos, _vitesse, _vision, _age, _vie, _espVie, _monde), enceinte(false)
{
}

Femme::Femme(const Position& _pos, const string& _nom,
    const unsigned int _vitesse, const unsigned int _vision,
    const unsigned int _age, const unsigned int _vie,
    const unsigned int _espVie, Monde* _monde) :
    Humain(_pos, _nom, _vitesse, _vision, _age, _vie, _espVie, _monde), enceinte(false)
{
}

Femme::~Femme()
{
}

void Femme::reproduction(){
  if( hommeACote() && rand()%1+3==1)
    enceinte=true;
}

bool Femme::hommeACote(){

//  while( !trouve && ...){
//      if(typeid()=="Homme"){
//
//      }
//
//  }

  return true;
}

