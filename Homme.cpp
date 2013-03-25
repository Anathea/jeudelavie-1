/* 
 * File:   Homme.cpp
 * Author: natha
 * 
 * Created on 22 mars 2013, 08:14
 */

#include "Homme.h"

Homme::Homme(Monde *_monde) :
    Humain(_monde)
{
}

Homme::Homme(const Position& _pos, const unsigned int _vitesse,
    const unsigned int _vision, const unsigned int _age,
    const unsigned int _vie, const unsigned int _espVie, Monde* _monde) :
    Humain(_pos, _vitesse, _vision, _age, _vie, _espVie, _monde)
{
}

Homme::Homme(const Position& _pos, const string& _nom,
    const unsigned int _vitesse, const unsigned int _vision,
    const unsigned int _age, const unsigned int _vie,
    const unsigned int _espVie, Monde* _monde) :
    Humain(_pos, _nom, _vitesse, _vision, _age, _vie, _espVie, _monde)
{
}

Homme::~Homme()
{
}

