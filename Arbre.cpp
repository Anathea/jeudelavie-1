/* 
 * File:   Arbre.cpp
 * Author: natha
 * 
 * Created on 22 mars 2013, 09:00
 */

#include "Arbre.h"

Arbre::Arbre(Monde *_monde) :
    Element(_monde), Ressource(_monde)
{
}

Arbre::Arbre(const Position& _pos, Monde* _monde) :
    Element(_pos, _monde), Ressource(_pos, _monde)
{
}

Arbre::~Arbre()
{
}

void
Arbre::agir()
{
  Ressource::agir();
}

void
Arbre::addRandomArbres(Monde *_monde)
{
  int nbElem = _monde->getParam().getValeurParametre("nb_arbre");
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
      _monde->ajouter(new Arbre(pos, _monde));
    }
}
