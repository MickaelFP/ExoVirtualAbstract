#ifndef NAVETTE_H
#define NAVETTE_H

#include "Vehicule.h"


class Navette : public Vehicule
{
  private:

  public:
    Navette();
    Navette(int hp);
    void test();
    //void attackPlayer(Vehicule* cible); ****** MARCHE PAS ******
    
};

#endif // Navette_H
