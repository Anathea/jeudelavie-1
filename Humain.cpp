/* 
 * File:   Humain.cpp
 * Author: natha
 * 
 * Created on 27 février 2013, 10:45
 */

#include "Humain.h"

//Humain(const Mobile & _mob, const int & _vitesse, Monde * _monde, int & _age, int & _vision, int & _vie, int & _espVie);
//Humain(const Position & _pos, const string & _nom, const int & _vitesse, Monde * _monde,
//	int & _age, int & _vision, int & _vie, int & _espVie);
//Humain(const int & _posX, const int & _posY, const string & _nom, const int & _vitesse, Monde * _monde,
//	int & _age, int & _vision, int & _vie, int & _espVie);

Humain::Humain() :
	Mobile(), age(0), vision(1), vie(100), espVie(5000) {}

Humain::Humain(const Mobile & _mob, const unsigned int & _age, const unsigned int & _vision,
	const unsigned int & _vie, const unsigned int & _espVie) :
	Mobile(), age(_age), vision(_vision), vie(_vie), espVie(_espVie) {}

Humain::Humain(const Element & _elt, const unsigned int & _vitesse, const Monde * _monde,
	const unsigned int & _age, const unsigned int & _vision, const unsigned int & _vie, const unsigned int & _espVie) :
	Mobile(_elt, _vitesse, _monde), age(_age), vision(_vision), vie(_vie), espVie(_espVie) {}

Humain::Humain(const Position & _pos, const string & _nom, const unsigned int & _vitesse, const Monde * _monde,
	const unsigned int & _age, const unsigned int & _vision, const unsigned int & _vie, const unsigned int & _espVie) :
	Mobile(Element(_pos, _nom), _vitesse, _monde), age(_age), vision(_vision), vie(_vie), espVie(_espVie) {}

Humain::Humain(const unsigned int _posX, const unsigned int _posY, const string & _nom, const unsigned int & _vitesse,
	const Monde * _monde, const unsigned int & _age, const unsigned int & _vision, const unsigned int & _vie,
	const unsigned int & _espVie) :
	Mobile(Element(Position(_posX, _posY), _nom), _vitesse, _monde), age(_age), vision(_vision), vie(_vie), espVie(_espVie) {}

Humain::Humain(const Humain & orig) {}
Humain::~Humain() {}

int Humain::getAge() {
	return age;
}

Humain::setAge(int _age) {
	age = _age;
}

int Humain::getVision() {
	return vision;
}

Humain::setVision(int _vision) {
	vision = _vision;
}

int Humain::getVie() {
	return vie;
}

Humain::setVie(int _vie) {
	vie = _vie;
}

int Humain::getEspVie() {
	return espVie;
}

Humain::setEspVie(int _espVie) {
	espVie = _espVie;
}