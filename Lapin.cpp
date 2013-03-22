/* 
 * File:   Lapin.cpp
 * Author: natha
 * 
 * Created on 22 mars 2013, 09:00
 */

#include "Lapin.h"

Lapin::Lapin(Monde *_monde) :
    Element(_monde), Ressource(_monde), Mobile(_monde)
{
}

Lapin::~Lapin()
{
}

