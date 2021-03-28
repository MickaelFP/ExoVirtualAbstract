#include "Arme.h"

Arme::Arme()
{
    setDegats(50);
    setPortee(1);
    setType("normal");
    setRangRequis(0);
    setPrix(0);
}

Arme::Arme(int d, int p, string t, int rr, int pr)
{
    setDegats(d);
    setPortee(p);
    setType(t);
    setRangRequis(rr);
    setPrix(pr);
}

Arme::~Arme()
{
    //détruite
}

int Arme::getDegats()
{
    return degats;
}
void Arme::setDegats(int d)
{
    degats = d;
}

int Arme::getPortee()
{
    return portee;
}
void Arme::setPortee(int p)
{
    portee = p;
}

string Arme::getType()
{
    return type;
}
void Arme::setType(string t)
{
    type = t;
}

int Arme::getRangRequis()
{
    return rangRequis;
}
void Arme::setRangRequis(int rr)
{
    rangRequis = rr;
}

int Arme::getPrix()
{
    return prix;
}
void Arme::setPrix(int p)
{
    prix = p;
}