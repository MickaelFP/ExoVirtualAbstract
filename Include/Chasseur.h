#ifndef CHASSEUR_H
#define CHASSEUR_H

#include "Vehicule.h"


class Chasseur : public Vehicule
{
  private:

  public:
    Chasseur();
    Chasseur(int hp);
    void test();
    //void attackPlayer(Vehicule* cible); ****** MARCHE PAS ******
    
};

#endif // Chasseur_H
