/* 
 * File:   Element.h
 * Author: natha
 *
 * Created on 27 février 2013, 10:05
 */

#ifndef ELEMENT_H
#define ELEMENT_H

#include <string>
#include <iostream>
#include "Position.h"
using namespace std;

class Element
{
public:
  // Constructeurs
  Element();
  Element(const Position & _pos, const string & _nom);
  Element(const unsigned int & _posX, const unsigned int & _posY,
      const string & _nom);
  virtual
  ~Element();

  // Getters & setters
  string
  getNom() const;
  void
  setNom(const string _nom);
  const Position&
  getPos() const;
  void
  setPos(const Position _pos);

  // Autres méthodes
  void
  afficher() const;

private:
  Position pos;
  string nom;
};

#endif	/* ELEMENT_H */
