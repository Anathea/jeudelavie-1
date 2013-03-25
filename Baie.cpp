/* 
 * File:   Baie.cpp
 * Author: natha
 * 
 * Created on 22 mars 2013, 09:00
 */

#include "Baie.h"

Baie::Baie(Monde *_monde) :
    Ressource(_monde)
{
}

Baie::Baie(const Position& _pos, Monde* _monde) : Ressource(_pos, _monde)
{
}

Baie::~Baie()
{
}

