/* 
 * File:   Mobile.cpp
 * Author: natha
 * 
 * Created on 27 février 2013, 10:07
 */

#include "Mobile.h"

Mobile::Mobile(const Monde * _monde) :
	monde(* _monde), vitesse(1) {}

Mobile::Mobile(const Element & _elt, const unsigned int & _vitesse, const Monde * _monde) :
	monde(* _monde), Element(_elt), vitesse(_vitesse) {}

Mobile::Mobile(const Position & _pos, const string & _nom, const unsigned int & _vitesse, const Monde * _monde) :
	Element(_pos, _nom), vitesse(_vitesse) {}

Mobile::Mobile(const unsigned int & _posX, const unsigned int & _posY, const string & _nom,
	const unsigned int & _vitesse, const Monde * _monde) :
	Element(Position(_posX, _posY), _nom), vitesse(_vitesse) {}
	
Mobile::Mobile(const Mobile & orig) {}
Mobile::~Mobile() {}

Mobile::SeDeplacer(Position _pos) {

}

Monde * Mobile::getMonde() {
	return * monde;
}

Mobile::setMonde(Monde * _monde) {
	* monde = * _monde;
}

int Mobile::getVitesse() {
	return vitesse;
}

Mobile::setVitesse(int _vitesse) {
	vitesse = _vitesse;
}