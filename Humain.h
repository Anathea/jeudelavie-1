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
using namespace std;

class Humain : public Mobile
{
public:
  //Constructeurs
  Humain(Monde *_monde);
  Humain(const Position &_pos, const unsigned int _vitesse,
      const unsigned int _vision, const unsigned int _age,
      const unsigned int _vie, const unsigned int _espVie, Monde *_monde);
  Humain(const Position & _pos, const string & _nom,
      const unsigned int _vitesse, const unsigned int _vision,
      const unsigned int _age, const unsigned int _vie,
      const unsigned int _espVie, Monde *_monde);

  virtual
  ~Humain();
  
  vector<Position>
  voir(Position pos) const;
  
  vector<Position>
  rechVoisins(int profondeur, Position pos, vector<Position> vecteur) const;


  // Getters & setters
  unsigned int
  getAge() const;
  void
  setAge(const unsigned int _age);
  unsigned int
  getVie() const;
  void
  setVie(const unsigned int _vie);
  unsigned int
  getEspVie() const;
  void
  setEspVie(const unsigned int _espVie);

  // Autres méthodes

private:
  unsigned int age;
  unsigned int vie;
  unsigned int espVie;

};

#endif	/* HUMAIN_H */
