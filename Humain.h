/* 
 * File:   Humain.h
 * Author: natha
 *
 * Created on 27 février 2013, 10:45
 */

#ifndef HUMAIN_H
#define	HUMAIN_H

#include <string>
#include "Mobile.h"
using namespace ::std;

class Humain : public Mobile {
public:
	//Constructeurs
	Humain(Monde * _monde, const unsigned int _age = 0, const unsigned int _vision = 1,
	const unsigned int _vie = 100, const unsigned int _espVie = 7000);

	Humain(const Mobile & _mob, const unsigned int & _age, const unsigned int & _vision,
	const unsigned int & _vie, const unsigned int & _espVie);

	Humain(const Element & _elt, Monde * _monde, const unsigned int & _vitesse,
	const unsigned int & _age, const unsigned int & _vision, const unsigned int & _vie, const unsigned int & _espVie);

	Humain(const Position & _pos, const string & _nom, const unsigned int & _vitesse, Monde * _monde,
	const unsigned int & _age, const unsigned int & _vision, const unsigned int & _vie, const unsigned int & _espVie);

	Humain(const unsigned int & _posX, const unsigned int & _posY, const string & _nom, const unsigned int & _vitesse,
		Monde * _monde, const unsigned int & _age, const unsigned int & _vision,
		const unsigned int & _vie, const unsigned int & _espVie);

	virtual ~Humain();
	
	// Getters & setters
	unsigned int getAge() const;
	void setAge(const unsigned int _age);
	unsigned int getVision() const;
	void setVision(const unsigned int _vision);
	unsigned int getVie() const;
	void setVie(const unsigned int _vie);
	unsigned int getEspVie() const;
	void setEspVie(const unsigned int _espVie);

	// Autres méthodes

private:
	unsigned int age;
	unsigned int vision;
	unsigned int vie;
	unsigned int espVie;
};

#endif	/* HUMAIN_H */