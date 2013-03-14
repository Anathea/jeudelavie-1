/* 
 * File:   Fixe.cpp
 * Author: natha
 * 
 * Created on 27 février 2013, 10:07
 */

#include "Fixe.h"

Fixe::Fixe() :
    Element()
{
}

Fixe::Fixe(const Element & _elt) :
    Element(_elt)
{
  cout << "Création d'un element Fixe...\n";
}

Fixe::Fixe(const Position& _pos, const string& _nom) :
    Element(_pos, _nom)
{
}

Fixe::Fixe(const unsigned int& _posX, const unsigned int& _posY,
    const string& _nom) :
        Element(_posX,_posY,_nom)
{
}

Fixe::~Fixe()
{
}
