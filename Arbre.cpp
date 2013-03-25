/* 
 * File:   Arbre.cpp
 * Author: natha
 * 
 * Created on 22 mars 2013, 09:00
 */

#include "Arbre.h"

Arbre::Arbre(Monde *_monde) :
    Ressource(_monde)
{
}

Arbre::Arbre(const Position& _pos, Monde* _monde) :
    Ressource(_pos, _monde)
{
}

Arbre::~Arbre()
{
}

