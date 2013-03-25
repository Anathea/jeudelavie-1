/* 
 * File:   Lapin.cpp
 * Author: natha
 * 
 * Created on 22 mars 2013, 09:00
 */

#include "Lapin.h"

Lapin::Lapin(Monde *_monde) :
    Ressource(_monde), Mobile(_monde)
{
}

Lapin::Lapin(const Position &_pos, const unsigned int _vitesse,
    Monde* _monde) :
    Ressource(_pos, _monde), Mobile(_pos, _vitesse, _monde)
{
}

Lapin::Lapin(const Position& _pos, const string& _nom,
    const unsigned int _vitesse, Monde* _monde) :
    Ressource(_pos, _nom, _monde), Mobile(_pos, _vitesse, _monde)
{
}

Lapin::~Lapin()
{
}

