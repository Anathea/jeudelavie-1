/* 
 * File:   Humain.cpp
 * Author: natha
 * 
 * Created on 27 février 2013, 10:45
 */

#include "Humain.h"

Humain::Humain(Monde *_monde) :
    Element(_monde), Mobile(_monde), age(0), espVie(7000)
{
}

Humain::Humain(const Position &_pos, const unsigned int _vitesse,
    const unsigned int _vision, const unsigned int _age,
    const unsigned int _espVie, Monde *_monde) :
    Element(_pos, _monde), Mobile(_pos, _vision, _vitesse, _monde), age(_age), espVie(
        _espVie)
{
}

Humain::Humain(const Position &_pos, const string &_nom,
    const unsigned int _vitesse, const unsigned int _vision,
    const unsigned int _age,
    const unsigned int _espVie, Monde *_monde) :
    Element(_pos, _nom, _monde), Mobile(_pos, _nom, _vision, _vitesse, _monde), age(_age), espVie(
        _espVie)
{
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
Humain::getEspVie() const
{
  return espVie;
}

void
Humain::setEspVie(const unsigned int _espVie)
{
  espVie = _espVie;
}

void
Humain::agir() const
{

}
