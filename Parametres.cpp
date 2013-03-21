/*
 * Parametres.cpp
 *
 *  Created on: 19 mars 2013
 *      Author: thomas
 */

#include "Parametres.h"
#include <fstream>


using namespace std;

Parametres::Parametres()
{
  ifstream fichier("parametres", ios::in);  // on ouvre le fichier en lecture

  if(fichier)  {    // si l'ouverture a réussi
      string line;

      // tant qu'on est pas a la fin du fichier
      while( !fichier.eof() )
      {
          // initialisation de la ligne a vide
          line="";

          //lecture d'une ligne du fichier
          getline(fichier, line);

          if(!line.empty()){
            // On serpare les valeurs de la ligne en 2 ( cle / valeur )
            vector<string> v = explode(" ", line);

            //si la ligne est vide ou qu'elle n'est pas en couple
            if(!v.empty() || v.size()!=2 ){
                int value;
                istringstream ss(v[1]);
                ss >> value;

                // on insere dans la ligne
                param.insert( pair<string, int> (v[0], value));
            }
          }
      }
      // on ferme le fichier
    fichier.close();
  }
  else  // sinon
    cerr << "Impossible d'ouvrir le fichier !" << endl;


}

Parametres::~Parametres()
{
  // TODO Auto-generated destructor stub
}

const int Parametres::getValeurParametre( const string _cle ){
  return param.find(_cle)->second;
}

const void Parametres::setValeurParam(const string _cle, const int _valeur){

    param.erase (param.find(_cle));
    param.insert( pair<string, int> (_cle, _valeur));

}

// Fonction qui permet de separer une chaine de caratere par un délimiteur dans un vecteur
vector<string> Parametres::explode( const string &delimiter, const string &str)
{
    vector<string> arr;

    int strleng = str.length();
    int delleng = delimiter.length();
    if (delleng==0)
        return arr;//no change

    int i=0;
    int k=0;
    while( i<strleng )
    {
        int j=0;
        while (i+j<strleng && j<delleng && str[i+j]==delimiter[j])
            j++;
        if (j==delleng)//found delimiter
        {
            arr.push_back(  str.substr(k, i-k) );
            i+=delleng;
            k=i;
        }
        else
        {
            i++;
        }
    }
    arr.push_back(  str.substr(k, i-k) );
    return arr;
}

