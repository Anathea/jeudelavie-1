/* 
 * File:   Humain.cpp
 * Author: natha
 * 
 * Created on 27 février 2013, 10:45
 */

#include "Humain.h"

Humain::Humain(Monde *_monde) :
    Mobile(_monde), age(0), vie(100), espVie(7000)
{
}

Humain::Humain(const Position &_pos, const string &_nom,
    const unsigned int _vitesse, const unsigned int _vision,
    const unsigned int _age, const unsigned int _vie,
    const unsigned int _espVie, Monde *_monde) :
    Mobile(_pos, _nom, _vision, _vitesse, _monde), age(_age), vie(
        _vie), espVie(_espVie)
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
