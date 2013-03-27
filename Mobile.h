/* 
 * File:   Mobile.h
 * Author: natha
 *
 * Created on 27 février 2013, 10:07
 */

#ifndef MOBILE_H
#define	 MOBILE_H

#include <string>
#include "Element.h"
#include "Monde.h"

class Element;

typedef enum
{
  NORD = 0, NORDEST, SUDEST, SUD, SUDOUEST, NORDOUEST
} Direction;

class Mobile : public virtual Element
{
public:
  // Constructeurs
  Mobile(Monde *_monde);
  Mobile(const Position &_pos, Monde *_monde);
  Mobile(const Position &_pos, unsigned int _vitesse, Monde *_monde);
  Mobile(const Position &_pos, const unsigned int _vision,
      const unsigned int _vitesse, Monde *_monde);
  Mobile(const Position & _pos, const string & _nom, const unsigned int _vision,
      const unsigned int _vitesse, Monde *_monde);

  virtual
  ~Mobile();

  // Getters & setters
  unsigned int
  getVitesse() const;
  void
  setVitesse(const unsigned int _vitesse);
  unsigned int
  getVision() const;
  void
  setVision(const unsigned int _vision);
  Direction
  getRandomDirection() const;

  //Autres méthodes
  bool
  seDeplacer(const Direction _dir);
  void
  agir();

private:
  unsigned int vision;
  unsigned int vitesse;
};

#endif	/* MOBILE_H */
