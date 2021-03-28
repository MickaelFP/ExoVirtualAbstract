#include "Navette.h"

Navette::Navette() : Vehicule(100, 200, 400, 1, 24, 600, 600, 0, 2, 50, 0.05, "Navette")
{
  cout<<"Type Navette"<<endl;
}

Navette::Navette(int hp) : Vehicule(hp, 1200, 2400, 1, 336, 18000, 1800, 150, 6, 25, 0.05, "Navette")
{
  cout<<"Type Navette"<<endl;
}

void Navette::test()
{
  cout<<"Navette"<<endl;
}
/****** MARCHE PAS ******
void Navette::attackPlayer(Vehicule* cible)
{
  float random = rand()%100;
  if(random <= (getSurchargeLaser()*100))
  {
    cout<<"CRIT"<<endl;
    cible->setCoque(cible->getCoque() - ((getPuissanceLaser()*getLaser())*3)
    +getArme()->getDegats());
  }
  else
  {
    cible->setCoque(cible->getCoque() - (getPuissanceLaser()*getLaser())
    +getArme()->getDegats());
  }
}
*/