/* 
 * File:   Element.cpp
 * Author: natha
 * 
 * Created on 27 février 2013, 10:05
 */

#include "Element.h"
#include <time.h>
#include <stdlib.h>

using namespace std;

const string Element::tnames[] =
  { "Cyrano", "Christian", "Roxane", "DeGuiche", "Raguenaud" };
const vector<string> Element::names(tnames,
    tnames + (sizeof(tnames) / sizeof(tnames[0])));

Element::Element(Monde *_monde) :
    pos(), nom(getRandomName())
{
  srand(time(0));
  monde = _monde;
}

Element::Element(const Position &_pos, Monde *_monde) :
    pos(_pos), nom(getRandomName()), monde(_monde)
{
}

Element::Element(const Position & _pos, const string & _nom, Monde *_monde) :
    pos(_pos), nom(_nom)
{
  monde = _monde;
}

Element::Element(const unsigned int _posX, const unsigned int _posY,
    const string _nom, Monde *_monde) :
    pos(_posX, _posY), nom(_nom)
{
  monde = _monde;
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

Monde *
Element::getMonde() const
{
  return monde;
}

string
Element::getRandomName()
{
  return names.at(rand() % names.size());
}

void
Element::afficher() const
{
  cout << "Element " << getNom() << " : " << getPos() << endl;
}
