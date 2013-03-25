/* 
 * File:   Sanglier.cpp
 * Author: natha
 * 
 * Created on 22 mars 2013, 09:00
 */

#include "Sanglier.h"

Sanglier::Sanglier(Monde *_monde) :
    Ressource(_monde), Mobile(_monde)
{
}

Sanglier::Sanglier(const Position &_pos, const unsigned int _vitesse,
    Monde* _monde) :
    Ressource(_pos, _monde), Mobile(_pos, _vitesse, _monde)
{
}

Sanglier::Sanglier(const Position& _pos, const string& _nom,
    const unsigned int _vitesse, Monde* _monde) :
    Ressource(_pos, _nom, _monde), Mobile(_pos, _vitesse, _monde)
{
}

Sanglier::~Sanglier()
{
}

