/* 
 * File:   Homme.cpp
 * Author: natha
 * 
 * Created on 22 mars 2013, 08:14
 */

#include "Homme.h"

Homme::Homme(Monde *_monde) :
    Element(_monde), Humain(_monde)
{
}

Homme::Homme(const Position& _pos, const unsigned int _vitesse,
    const unsigned int _vision, const unsigned int _age,
    const unsigned int _espVie, Monde* _monde) :
    Element(_pos, _monde), Humain(_pos, _vitesse, _vision, _age, _espVie, _monde)
{
}

Homme::Homme(const Position& _pos, const string& _nom,
    const unsigned int _vitesse, const unsigned int _vision,
    const unsigned int _age,
    const unsigned int _espVie, Monde* _monde) :
    Element(_pos, _nom, _monde), Humain(_pos, _nom, _vitesse, _vision, _age, _espVie, _monde)
{
}

Homme::~Homme()
{
}

void
Homme::addRandomHommes(Monde *_monde)
{
  int nbElem = _monde->getParam().getValeurParametre("nb_homme");
  Position pos;
  for (int i = 0; i < nbElem; i++)
    {
      // On cherche une position inocuppée
      do
        {
          pos = _monde->posAleatoire();
        }
      while (!_monde->estValide(pos));
      // On ajoute dans le monde
      _monde->ajouter(new Homme(pos, 1, 1, 25, 60, _monde));
    }
}

void
Homme::agir()
{
  Humain::agir();
}
