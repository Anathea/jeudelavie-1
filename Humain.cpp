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

Humain::Humain(Monde * _monde) :
	Mobile(_monde), age(0), vision(1), vie(100), espVie(5000) {}

Humain::Humain(const Mobile & _mob, const unsigned int & _age, const unsigned int & _vision,
	const unsigned int & _vie, const unsigned int & _espVie) :
	Mobile(_mob), age(_age), vision(_vision), vie(_vie), espVie(_espVie) {}

Humain::Humain(const Element & _elt, Monde * _monde, const unsigned int & _vitesse,
	const unsigned int & _age, const unsigned int & _vision, const unsigned int & _vie, const unsigned int & _espVie) :
	Mobile(_elt, _monde, _vitesse), age(_age), vision(_vision), vie(_vie), espVie(_espVie) {}

Humain::Humain(const Position & _pos, const string & _nom, const unsigned int & _vitesse, Monde * _monde,
	const unsigned int & _age, const unsigned int & _vision, const unsigned int & _vie, const unsigned int & _espVie) :
	Mobile(_pos, _nom, _monde, _vitesse), age(_age), vision(_vision), vie(_vie), espVie(_espVie) {}

Humain::Humain(const unsigned int & _posX, const unsigned int & _posY, const string & _nom, const unsigned int & _vitesse,
		Monde * _monde, const unsigned int & _age, const unsigned int & _vision,
		const unsigned int & _vie, const unsigned int & _espVie) :
	Mobile(_posX, _posY, _nom, _monde, _vitesse), age(_age), vision(_vision), vie(_vie), espVie(_espVie) {}

Humain::~Humain() {}

unsigned int Humain::getAge() const {
	return age;
}

void Humain::setAge(const unsigned int _age) {
	age = _age;
}

unsigned int Humain::getVision() const {
	return vision;
}

void Humain::setVision(const unsigned int _vision) {
	vision = _vision;
}

unsigned int Humain::getVie() const {
	return vie;
}

void Humain::setVie(const unsigned int _vie) {
	vie = _vie;
}

unsigned int Humain::getEspVie() const {
	return espVie;
}

void Humain::setEspVie(const unsigned int _espVie) {
	espVie = _espVie;
}