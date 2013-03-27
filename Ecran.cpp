/* 
 * File:   Ecran.cpp
 * Author: natha
 * 
 * Created on 15 mars 2013, 11:31
 */
#include "Ecran.h"
#include "Homme.h"
#include "Femme.h"

Ecran::Ecran(Monde * _monde) : monde(_monde)
{
  this->clear();
}

Ecran::~Ecran()
{}

void Ecran::clear() const
{
  changeColor(14); // fond en bleu
  cout << "\033[H\033[2J"; // efface l'écran
  int l_map = this->monde->getL();
  int h_map = this->monde->getH();
  
  for(int y=0 ; y<h_map+2 ; y+=2)
  {
    for(int x=0 ; x<l_map/2 ; x++) // ligne 1
    {
      if (y==0)
        cout << "  .----.      ";
      else if (y >= h_map && x==0)
        cout << "  `----(      ";
      else
        cout << "  )----(      ";
    }
    if (y == 0)
      cout << "\n";
    else
      cout << "  )\n";
    
    for(int x=0 ; x<l_map/2 ; x++) // ligne 2
    {
      if (y >= h_map && x==0)
        cout << "        \\     ";
      else
        cout << " /      \\     ";
    }
    if (y == 0)
      cout << "\n";
    else
      cout << " /\n";
    
    for(int x=0 ; x<l_map/2 ; x++) // ligne 3
    {
      if (y >= h_map && x==0)
        cout << "         `----";
      else if (y >= h_map)
        cout << "`        `----";
      else
        cout << "(        )----";

    }
    if (y == 0)
      cout << ".\n";
    else if (y >= h_map)
      cout << "`\n";
    else
      cout << "(\n";
    
      for(int x=0 ; x<l_map/2 ; x++) // ligne 4
      {
        if (y < h_map)
          cout << " \\      /     ";
      }
    if (y < h_map)
    cout << " \\\n";
    else
      cout << "\n";
  }
}

void Ecran::affMonde() const
{
  for(long unsigned int i=0 ; i<this->monde->size() ; i++)
  {
    affElement(this->monde->at(i));
  }
  
  txtPos(0, monde->getH()*2+3, "\n\n"); // On se replace en bas de l'écran.
}

void Ecran::affElement(Element *_elt) const
{
  Position pos = _elt->getPos();
  int type = 0;
  
  if (_elt->getMonde()->estValide(pos))
  {
    cout << "\n!! Affichage à la position [" << pos.getX() << ";" << pos.getY() << "] non-valide !!\n";
  }
  else
  {
    if (typeid(*_elt) == typeid(Element)) type = 6;
    else if (typeid(*_elt) == typeid(Homme)) type = 0;
    else if (typeid(*_elt) == typeid(Femme)) type = 1;
    else if (typeid(*_elt) == typeid(Arbre)) type = 2;
    else if (typeid(*_elt) == typeid(Baie)) type = 3;
    else if (typeid(*_elt) == typeid(Sanglier)) type = 4;
    else if (typeid(*_elt) == typeid(Lapin)) type = 5;
    else cout << "\nElement affiché de type inconnu.\n";

    switch(type)
    {
      case 0 : // Homme
        asciiArt(_elt->getPos(), "(o.O)", " /|x|\\ ","  W", 0);
      break;
      case 1 : // Femme
        asciiArt(_elt->getPos(), " /..\\", "  /00\\ ","  VV", 0);
        break;
      case 2 : // Arbre
        asciiArt(_elt->getPos(), ".\\Y./", "  \\Y/. ","__|___", 0);
        break;
      case 3 : // Baie
        asciiArt(_elt->getPos(), "####o#", "#.######","###o##", 0);
        break;
      case 4 : // Sanglier
        asciiArt(_elt->getPos(), "\\/-\\/", " ). .( ", "((^))", 0);
        break;
      case 5 : // Lapin
        asciiArt(_elt->getPos(), "__(.)<", "~\\___)~~", "~~~~~~", 0);
        break;
      case 6 : // Element
        asciiArt(_elt->getPos(), "******", "********", "******", 0);

        break;
      default : cout << "\nErreur lors de l'affichage d'un élement.\n"; break;
    }
  }
}

void Ecran::asciiArt(Position _pos, string _ch1, string _ch2, string _ch3, int _couleur) const
{
  int posX = _pos.getX()*7+2;
  int posY = _pos.getY()*2+3;
  
  changeColor(_couleur);
  
  txtPos(posX+1, posY-1, _ch1);
  txtPos(posX, posY, _ch2);
  txtPos(posX+1, posY+1, _ch3);
}

void Ecran::changeColor(int couleur) const
{
  std::stringstream ss;
  ss << couleur + 30;
  cout << "\033[" << ss.str() << "m";
}

void Ecran::txtPos(int _x, int _y, string _s) const
{
  cout << "\033[" << _y << ";" << _x << "H" << _s;
}

void Ecran::txtPos(int _x, int _y, string _s, int _color) const
{
  changeColor(_color);
  txtPos(_x, _y, _s);
}

void Ecran::pause() const
{
  sleep(2); // à changer : durée de pause est un paramètre
}
