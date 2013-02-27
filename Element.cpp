/* 
 * File:   Element.cpp
 * Author: natha
 * 
 * Created on 27 février 2013, 10:05
 */

#include "Element.h"

Element::Element() :
	nom("Inconnu"), Position(Position()) {}

Element::Element(const Position & _pos, const string & _nom) :
	nom(_nom), Position(_pos) {}

Element::Element(const unsigned int & _posX, const unsigned int & _posY, const string & _nom) :
	nom(_nom), Position(_posX, _posY) {}

Element::Element(const Element& orig) {}
Element::~Element() {}

string Element::getNom() {
	return nom;
}

Element::setNom(string _nom) {
	nom = _nom;
}

Element::getPos() {
	Position pos;
}

Element::setPos() {
	Position pos;
}