/* 
 * File:   Mobile.h
 * Author: natha
 *
 * Created on 27 février 2013, 10:07
 */

#ifndef MOBILE_H
#define	MOBILE_H

#include <string>
using namespace ::std;

class Mobile : public Element {
public:
	Mobile(const Monde * _monde);
	Mobile(const Element & _elt, const unsigned int & _vitesse, const Monde * _monde);
	Mobile(const Position & _pos, const string & _nom, const unsigned int & _vitesse, const Monde * _monde);
	Mobile(const unsigned int & _posX, const unsigned int & _posY, const string & _nom, const unsigned int & _vitesse, const Monde * _monde);
	
	Mobile(const Mobile & orig);
	virtual ~Mobile();
	
	SeDeplacer(Position _pos);
	Monde * getMonde();
	setMonde(Monde * _monde);
	int getVitesse();
	setVitesse(int _vitesse);

private:
	Monde * monde; // Pour qu'un élement puisse voir autour de lui, il faut qu'il est accès au monde.
	int & vitesse;
};

#endif	/* MOBILE_H */