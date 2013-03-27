/* 
 * File:   Mobile.cpp
 * Author: natha
 * 
 * Created on 27 février 2013, 10:07
 */

#include "Mobile.h"

Mobile::Mobile(Monde *_monde) :
    Element(_monde), vision(1), vitesse(1)
{
}

Mobile::Mobile(const Position& _pos, Monde* _monde) :
    Element(_pos, _monde), vision(1), vitesse(1)
{
}

Mobile::Mobile(const Position &_pos, const unsigned int _vitesse, Monde *_monde) :
    Element(_pos, _monde), vision(1), vitesse(_vitesse)
{

}

Mobile::Mobile(const Position& _pos, const unsigned int _vision,
    const unsigned int _vitesse, Monde* _monde) :
    Element(_pos, _monde), vision(_vision), vitesse(_vitesse)
{
}

Mobile::Mobile(const Position & _pos, const string & _nom,
    const unsigned int _vision, const unsigned int _vitesse, Monde *_monde) :
    Element(_pos, _nom, _monde), vision(_vision), vitesse(_vitesse)
{
}

Mobile::~Mobile()
{
}
/*
Mobile
Mobile::getVoisin(DIRECTION dir)
{
  Mobile voisin;
  
  switch (dir)
  {
    case _NORD:
      voisin = this->getMonde().getElbyPos(Position(getPos().getX(), getPos().getY()-2));
    break;
    case NORD_EST:
      voisin = Position(x+1, y-1);
    break;
    case SUD_EST:
      voisin = Position(x+1, y+1);
    break;
    case _SUD:
      voisin = Position(x, y+2);
    break;
    case SUD_OUEST:
      voisin = Position(x-1, y+1);
    break;
    case NORD_OUEST:
      voisin = Position(x-1, y-1);
    break;
  }
  //if (!this->getMonde()->estValide(posVoisin))
  //  posVoisin = null;
  
  return voisin;
}
*/
unsigned int
Mobile::getVitesse() const
{
  return vitesse;
}

void
Mobile::setVitesse(const unsigned int _vitesse)
{
  vitesse = _vitesse;
}

unsigned int
Mobile::getVision() const
{
  return vision;
}

void
Mobile::setVision(const unsigned int _vision)
{
  vision = _vision;
}

bool
Mobile::seDeplacer(const Direction _dir)
{
  Position curPos = getPos();
  Position nouvPos(curPos);
  Monde *monde = this->getMonde();
  unsigned int indice = monde->getMap().at(curPos);
  bool possible;

  switch (_dir)
    {
  case NORD:
    nouvPos.setY(nouvPos.getY() - 2);
    break;
  case NORDEST:
    nouvPos.setX(nouvPos.getX() + 2);
    nouvPos.setY(nouvPos.getY() - 2);
    break;
  case SUDEST:
    nouvPos.setX(nouvPos.getX() + 2);
    nouvPos.setY(nouvPos.getY() + 2);
    break;
  case SUD:
    nouvPos.setY(nouvPos.getY() + 2);
    break;
  case SUDOUEST:
    nouvPos.setX(nouvPos.getX() - 2);
    nouvPos.setY(nouvPos.getY() + 2);
    break;
  case NORDOUEST:
    nouvPos.setX(nouvPos.getX() - 2);
    nouvPos.setY(nouvPos.getY() - 2);
    break;
  default:
    break;
    }
  possible = monde->estValide(nouvPos);
  if (possible)
    {
      // Modification de la position de l'élément
      setPos(nouvPos);
      // Modification de la map
      monde->getMap().erase(curPos);
      monde->getMap().insert(pair<Position, unsigned int>(nouvPos, indice));

    }

  return possible;
}

Direction
Mobile::getRandomDirection() const
{
  return (Direction) (rand() % 6);
}
