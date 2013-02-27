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
	Humain(const Mobile & _elt, const unsigned int & _age, const unsigned int & _vision,
		const unsigned int & _vie, const unsigned int & _espVie);
	Humain(const Element & _elt, const unsigned int & _vitesse, const Monde * _monde,
		const unsigned int & _age, const unsigned int & _vision, const unsigned int & _vie, const unsigned int & _espVie);
	Humain(const Position & _pos, const string & _nom, const unsigned int & _vitesse, Monde * _monde,
		const unsigned int & _age, const unsigned int & _vision, const unsigned int & _vie, const unsigned int & _espVie);
	Humain(const unsigned int & _posX, const unsigned int & _posY, const string & _nom, const unsigned int & _vitesse,
		const Monde * _monde, const unsigned int & _age, const unsigned int & _vision,
		const unsigned int & _vie, const unsigned int & _espVie);
	
	Humain(const Humain& orig);
	virtual ~Humain();
	
	int getAge();
	setAge(int _age);
	int getVision();
	setVision(int _vision);
	int getVie();
	setVie(int _vie);
	int getEspVie();
	setEspVie(int _espVie);
	
private:
	int age;
	int vision;
	int vie;
	int espVie;
};

#endif	/* HUMAIN_H */

