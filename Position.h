/*
 * Position.h
 *
 *  Created on: 26 févr. 2013
 *      Author: thomas
 */

#ifndef POSITION_H_
#define POSITION_H_

class Position {

	private:
		unsigned int posx;
		unsigned int posy;

	public:
		Position(unsigned int, unsigned int);
		virtual ~Position();

		void setPos( unsigned int, unsigned int);
		unsigned int getPosX() const;
		unsigned int getPosY() const;
};

#endif /* POSITION_H_ */