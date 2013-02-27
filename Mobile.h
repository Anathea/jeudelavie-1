/* 
 * File:   Mobile.h
 * Author: natha
 *
 * Created on 27 février 2013, 10:07
 */

#ifndef MOBILE_H
#define	MOBILE_H

#include <string>
#include "Element.h"
#include "Monde.h"

using namespace ::std;

class Mobile : public Element {
public:
	// Constructeurs
	Mobile(Monde * _monde);
	Mobile(const Element & _elt, Monde * _monde, const unsigned int & _vitesse);
	Mobile(const Position & _pos, const string & _nom, Monde * _monde, const unsigned int & _vitesse);
	Mobile(const unsigned int & _posX, const unsigned int & _posY, const string & _nom,
	Monde * _monde, const unsigned int & _vitesse);
	virtual ~Mobile();

	// Getters & setters
	Monde * getMonde() const;
	void setMonde(Monde * _monde);
	unsigned int getVitesse() const;
	void setVitesse(const unsigned int _vitesse);

	//Autres méthodes
	void SeDeplacer(const Position _pos);

private:
	unsigned int vitesse;
	Monde * monde; // Pour qu'un élement puisse voir autour de lui, il faut qu'il est accès au monde.
};

#endif	/* MOBILE_H */