/* 
 * File:   Element.cpp
 * Author: natha
 * 
 * Created on 27 février 2013, 10:05
 */

#include "Element.h"

Element::Element() :
    pos(), nom("Inconnu")
{
  cout << "Création d'un Element...\n";
}

Element::Element(const Position & _pos, const string & _nom) :
    pos(_pos), nom(_nom)
{
}

Element::Element(const unsigned int & _posX, const unsigned int & _posY,
    const string & _nom) :
    pos(_posX, _posY), nom(_nom)
{
}

Element::~Element()
{
}

string
Element::getNom() const
{
  return nom;
}

void
Element::setNom(string _nom)
{
  nom = _nom;
}

const Position&
Element::getPos() const
{
  return pos;
}

void
Element::setPos(Position _pos)
{
  pos = _pos;
}

void
Element::afficher() const
{
  cout << "Element " << getNom() << " : " << getPos() << endl;
}
