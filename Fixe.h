/* 
 * File:   Fixe.h
 * Author: natha
 *
 * Created on 27 février 2013, 10:07
 */

#ifndef FIXE_H
#define	FIXE_H

#include <string>
using namespace ::std;

class Fixe : public Element {
public:
	Fixe(Element & _elt);
	Fixe(Position & _pos, string & _nom);
	Fixe(int & _posX, int & _posY, string & _nom);
	
	Fixe(const Fixe& orig);
	virtual ~Fixe();
private:

};

#endif	/* FIXE_H */

