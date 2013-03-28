/* 
 * File:   Humain.h
 * Author: natha
 *
 * Created on 27 février 2013, 10:45
 */

#ifndef HUMAIN_H
#define HUMAIN_H

#include <string>
#include <vector>
#include "Mobile.h"
#include "Element.h"

using namespace std;

class Humain : public Mobile
{
public:
  //Constructeurs
  Humain(Monde *_monde);
  Humain(const Position &_pos, const unsigned int _vitesse,
      const unsigned int _vision, const unsigned int _age,
      const unsigned int _espVie, Monde *_monde);
  Humain(const Position & _pos, const string & _nom,
      const unsigned int _vitesse, const unsigned int _vision,
      const unsigned int _age, const unsigned int _espVie, Monde *_monde);
  
  virtual
  ~Humain();
  
  vector<Element*>
  voir() const;
  
  // vector<Position>
  // rechVoisins(int profondeur, Position pos, vector<Position> vecteur) const;


  // Getters & setters
  unsigned int
  getAge() const;
  void
  setAge(const unsigned int _age);
  unsigned int
  getNourriture() const;
  void
  setNourriture(unsigned int nourriture);
  unsigned int
  getEspVie() const;
  void
  setEspVie(const unsigned int _espVie);

  // Autres méthodes
  void
  agir();

private:
  unsigned int age;
  unsigned int espVie;
  unsigned int nourriture;
};

#endif	/* HUMAIN_H */
