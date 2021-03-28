#ifndef ARME_H
#define ARME_H

#include <string>

using namespace std;

class Arme
{
    private:
        int degats;
        int portee;
        string type;
        int rangRequis;
        int prix;

    public:
        Arme();
        Arme(int d ,int p, string t, int rr, int pr);
        virtual ~Arme();

        int getDegats();
        void setDegats(int d);

        int getPortee();
        void setPortee(int p);

        string getType();
        void setType(string t);

        int getRangRequis();
        void setRangRequis(int rr);

        int getPrix();
        void setPrix(int pr);
};

#endif // ARME_H