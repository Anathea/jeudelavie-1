/* 
 * File:   Humain.cpp
 * Author: natha
 * 
 * Created on 27 février 2013, 10:45
 */

#include "Humain.h"

Humain::Humain(
    const Position & _pos, const string & _nom,
    const unsigned int _vitesse = 1, const unsigned int _vision = 1,
    const unsigned int _age = 0, const unsigned int _vie=100, const unsigned int _espVie=7000) : Mobile(_pos, _nom, _vitesse,_vision), age(_age),  vie(_vie), espVie(_espVie)
{
    cout << "Création d'un Humain...\n";
}


Humain::~Humain()
{
}

unsigned int
Humain::getAge() const
{
  return age;
}

void
Humain::setAge(const unsigned int _age)
{
  age = _age;
}

unsigned int
Humain::getVie() const
{
  return vie;
}

void
Humain::setVie(const unsigned int _vie)
{
  vie = _vie;
}

unsigned int
Humain::getEspVie() const
{
  return espVie;
}

void
Humain::setEspVie(const unsigned int _espVie)
{
  espVie = _espVie;
}
