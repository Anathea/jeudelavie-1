/*
 * Position.cpp
 *
 *  Created on: 26 févr. 2013
 *      Author: thomas
 */

#include "Position.h"

Position::Position(const unsigned int _posX, const unsigned int _posY) :
	posX(_posX), posY(_posY) {}

Position::~Position() {}

unsigned int Position::getPosX() const {
	return posX;
}

unsigned int Position::getPosY() const {
	return posY;
}

void Position::setPos(const unsigned int _posX, const unsigned int _posY) {
	posX = _posX;
	posY = _posY;
}