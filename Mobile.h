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
	Mobile();
	Mobile(const Element & _elt, const int & _vitesse, Monde * _monde);
	Mobile(const Position & _pos, const string & _nom, const int & _vitesse, Monde * _monde);
	Mobile(const int & _posX, const int & _posY, const string & _nom, const int & _vitesse, Monde * _monde);
	
	SeDeplacer(Position _pos);
	Mobile(const Mobile& orig);
	virtual ~Mobile();
	
private:
	Monde * monde; // Pour qu'un élement puisse voir autour de lui, il faut qu'il est accès au monde.
	int & vitesse;
};

#endif	/* MOBILE_H */