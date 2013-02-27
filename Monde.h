/* 
 * File:   Monde.h
 * Author: natha
 *
 * Created on 27 février 2013, 10:04
 */

#ifndef MONDE_H
#define	MONDE_H
#include "Position.h"
#include <vector>

using namespace std;

class Monde {
public:
	Monde();
	
	Monde(const Monde& orig);
	virtual ~Monde();
private:
	vector<Element> elts;
};

#endif	/* MONDE_H */

