/*
 * Position.cpp
 *
 *  Created on: 26 févr. 2013
 *      Author: thomas
 */

#include "Position.h"

Position::Position(unsigned int _posX, unsigned int _posY) {
	// TODO Auto-generated constructor stub

	posx=_posX;
	posy=_posY;

}

Position::~Position() {
	// TODO Auto-generated destructor stub
}

void Position::setPos(unsigned int _posx, unsigned int _posy){
	posx=_posx;
	posy=_posy;
}

unsigned int Position::getPosX() const {
	return posx;
}

unsigned int Position::getPosY() const {
	return posy;
}
