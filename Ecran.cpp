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

void Ecran::clear()
{
  unsigned int tailleX = 10; // à changer : tailleX/Y doit être dans le fichier paramètres
  unsigned int tailleY = 10;
  
  cout << "\033[H\033[2J";
  Position pos;
  for(unsigned int x=0 ; x<tailleX+1 ; x++)
    for(unsigned int y=0 ; y<tailleY+2 ; y++)
    {
      pos = Position(x, y);
      if (pos.estValide())
        affElement(1, pos);
      else
        affElement(0, pos);
    }
}

void Ecran::affMonde(Monde _monde)
{
  cout << "taille monde : " << _monde.size() << "\n";
  
  for(long unsigned int i=0 ; i<_monde.size() ; i++)
  {
    Position pos = _monde.at(i)->getPos();
    int type = 0;
    
    if (pos.estValide())
    {
      if(typeid(_monde.at(i)) == typeid(Homme))
        type = 2;
      else if(typeid(_monde.at(i)) == typeid(Femme))
        type = 3;
      else if(typeid(_monde.at(i)) == typeid(Arbre))
        type = 4;
      else if(typeid(_monde.at(i)) == typeid(Baie))
        type = 5;
      else if(typeid(_monde.at(i)) == typeid(Sanglier))
        type = 6;
      else if(typeid(_monde.at(i)) == typeid(Lapin))
        type = 7;
      else
        type = 1;
    }
    else
      cout << "\n!! Affichage d'un élément à une position non valide !!\n";
        
    affElement(type, pos);
    cout << "type : " << type;
  }
}

/*
 * type :
 * 0 | . | case inexistante
 * 1 | * | case vide
 * 2 | H | Homme
 * 3 | F | Femme
 * 4 | H | Arbre
 * 5 | F | Baie
 * 6 | M | Sanglier
 * 7 | I | Lapin
 */
void Ecran::affElement(int _type, Position _pos)
{
  txtPos(_pos.getX(), _pos.getY());
  changeColor(_type);
  
  switch(_type)
  {
    case 0 : cout << "."; break;
    case 1 : cout << "*"; break;
    case 2 : cout << "H"; break;
    case 3 : cout << "F"; break;
    case 4 : cout << "A"; break;
    case 5 : cout << "B"; break;
    case 6 : cout << "S"; break;
    case 7 : cout << "L"; break;
    default : break;
  }

  txtPos(0, 0);
  changeColor(0);
}

void Ecran::changeColor(int couleur)
{
  std::stringstream ss;
  ss << couleur + 30;
  cout << "\033[" << ss.str() << "m";
}

void Ecran::txtPos(int _x, int _y)
{
  cout << "\033[" << _y << ";" << _x << "H";
}

void Ecran::pause()
{
  sleep(2); // à changer : durée de pause est un paramètre
}