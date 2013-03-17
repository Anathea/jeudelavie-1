/* 
 * File:   Ecran.cpp
 * Author: natha
 * 
 * Created on 15 mars 2013, 11:31
 */

#include "Ecran.h"
#include "Position.h"

Ecran::Ecran()
{
  //this->fondNoir();
  this->clear();
}

Ecran::~Ecran()
{}

void Ecran::clear()
{
  cout << "\033[H\033[2J";
  for(int x=0 ; x<10 ; x++)
    for(int y=0 ; y<10 ; y++)
    affElement(0, Position(x, y));
}

/*
 * type :
 * 0 | . | case vide
 * 1 | H | homme
 * 2 | F | femme
 * 3 | I | ressource immobile
 * 4 | M | ressource mobile
 */
void Ecran::affElement(int _type, Position _pos)
{
  txtPos(_pos.getX(), _pos.getY());
  changeColor(_type);
  
  switch(_type)
  {
    case 0 : cout << "."; break;
    case 1 : cout << "H"; break;
    case 2 : cout << "F"; break;
    case 3 : cout << "I"; break;
    case 4 : cout << "M"; break;
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

void Ecran::fondNoir()
{
  changeColor(10);
}

void Ecran::txtPos(int _x, int _y)
{
  cout << "\033[" << _y << ";" << _x << "H";
}

void Ecran::pause()
{
  sleep(5); // à changer : durée de pause est un paramètre
}