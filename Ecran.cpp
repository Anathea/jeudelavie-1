/* 
 * File:   Ecran.cpp
 * Author: natha
 * 
 * Created on 15 mars 2013, 11:31
 */
#include "Ecran.h"
#include "Homme.h"
#include "Femme.h"
#include "RessourceFixe.h"
#include "RessourceMobile.h"

Ecran::Ecran()
{
  this->clear();
}

Ecran::~Ecran()
{}

void Ecran::clear() const
{
  int tailleX = 10; // à changer : tailleX/Y doit être dans le fichier paramètres
  int tailleY = 10;
  
  cout << "\033[H\033[2J"; // efface l'écran
  
  Position pos;
  for(int x=0 ; x<tailleX+1 ; x++)
    for(int y=0 ; y<tailleY+2 ; y++)
    {
      pos = Position(x, y);
      if (pos.estValide())
        txtPos(pos, "*", 0);
      else
        txtPos(pos, ".", 1);
    }
}

void Ecran::affMonde(Monde _monde) const
{
  for(long unsigned int i=0 ; i<_monde.size() ; i++)
  {
    affElement(_monde.at(i)); 
  }
  cout << "\n\n";
}

void Ecran::affElement(Element *_elt) const
{
  Position pos;
  int type = 0;
  
  if (!_elt->getMonde()->estValide(_elt->getPos()))
  {
    cout << "\n!! Affichage sur une position non-valide !!\n";
  }
  else
  {
    if (typeid(*_elt) == typeid(Homme)) type = 0;
    else if (typeid(*_elt) == typeid(Femme)) type = 1;
    else if (typeid(*_elt) == typeid(Arbre)) type = 2;
    else if (typeid(*_elt) == typeid(Baie)) type = 3;
    else if (typeid(*_elt) == typeid(Sanglier)) type = 4;
    else if (typeid(*_elt) == typeid(Lapin)) type = 5;
    else cout << "\nElement affiché de type inconnu.\n";

    switch(type)
    {
      case 0 : txtPos(pos, "H", 1); break;
      case 1 : txtPos(pos, "F", 1); break;
      case 2 : txtPos(pos, "A", 2); break;
      case 3 : txtPos(pos, "B", 2); break;
      case 4 : txtPos(pos, "S", 3); break;
      case 5 : txtPos(pos, "L", 3); break;
      default : cout << "\nErreur lors de l'affichage d'un élement.\n"; break;
    }
  }
}

void Ecran::changeColor(int couleur) const
{
  std::stringstream ss;
  ss << couleur + 30;
  cout << "\033[" << ss.str() << "m";
}

void Ecran::txtPos(Position _pos, string _s) const
{
  cout << "\033[" << _pos.getX() << ";" << _pos.getY() << "H" << _s;
}

void Ecran::txtPos(Position _pos, string _s, int _color) const
{
  changeColor(_color);
  cout << "\033[" << _pos.getX() << ";" << _pos.getY() << "H" << _s;
}

void Ecran::pause() const
{
  sleep(2); // à changer : durée de pause est un paramètre
}
