/* 
 * File:   Humain.h
 * Author: natha
 *
 * Created on 27 février 2013, 10:45
 */

#ifndef HUMAIN_H
#define	HUMAIN_H

#include <string>
using namespace ::std;

class Humain : public Mobile {
public:
	Humain();
	Humain(Mobile & _elt, int & _age, int & _vision, int & _vie, int & _espVie);
	Humain(const Element & _elt, const int & _vitesse, Monde * _monde, int & _age, int & _vision, int & _vie, int & _espVie);
	Humain(const Position & _pos, const string & _nom, const int & _vitesse, Monde * _monde, int & _age, int & _vision, int & _vie, int & _espVie);
	Humain(const int & _posX, const int & _posY, const string & _nom, const int & _vitesse, Monde * _monde, int & _age, int & _vision, int & _vie, int & _espVie);
	
	Humain(const Humain& orig);
	virtual ~Humain();
	
private:
	int age;
	int vision;
	int vie;
	int espVie;
};

#endif	/* HUMAIN_H */

