/* 
 * File:   Sanglier.cpp
 * Author: natha
 * 
 * Created on 22 mars 2013, 09:00
 */

#include "Sanglier.h"

Sanglier::Sanglier(Monde *_monde) :
    Element(_monde), Ressource(_monde), Mobile(_monde)
{
}

Sanglier::Sanglier(const Position &_pos, const unsigned int _vitesse,
    Monde* _monde) :
    Element(_pos, _monde), Ressource(_pos, _monde), Mobile(_pos, _vitesse,
        _monde)
{
}

Sanglier::Sanglier(const Position& _pos, const string& _nom,
    const unsigned int _vitesse, Monde* _monde) :
    Element(_pos, _nom, _monde), Ressource(_pos, _nom, _monde), Mobile(_pos,
        _vitesse, _monde)
{
}

Sanglier::~Sanglier()
{
}

void
Sanglier::addRandomSangliers(Monde *_monde)
{
  int nbElem = _monde->getParam().getValeurParametre("nb_sanglier");
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
      _monde->ajouter(new Sanglier(pos, 1, _monde));
    }
}

void
Sanglier::agir() const
{

}

