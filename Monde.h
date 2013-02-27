/* 
 * File:   Monde.h
 * Author: natha
 *
 * Created on 27 février 2013, 10:04
 */

#ifndef MONDE_H
#define	MONDE_H
#include "Position.h"
#include "Element.h"
#include <vector>

using namespace std;

class Monde {
public:
	// Constructeurs
	Monde();	
	virtual ~Monde();

	// Getters & setters

	// Autres méthodes

private:
	vector<Element> elts;
};

#endif	/* MONDE_H */

