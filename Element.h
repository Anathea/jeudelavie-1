/* 
 * File:   Element.h
 * Author: natha
 *
 * Created on 27 février 2013, 10:05
 */

#ifndef ELEMENT_H
#define	ELEMENT_H

#include <string>
using namespace ::std;

class Element {
public:
	Element();
	Element(string & _nom, Position & _pos);
	Element(string & _nom, int & _posX, int & _posY);
	Element(const Element& orig);
	virtual ~Element();
	
	string getNom();
	setNom(string _nom);
	Position getPos();
	setPos(string _pos);

private:
	string nom;
	Position pos;
};

#endif	/* ELEMENT_H */

