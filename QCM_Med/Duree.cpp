#include "Duree.h"

Duree::Duree()
{
    secondes = 0;
    minutes = 0;
    heures = 0;
}

void Duree::Remplissage(clock_t n)
{
    n = n / 1000;
    while (n >= 3600)
    {
        heures += 1;
        n -= 3600;
    }
    while (n >= 60)
    {
        minutes += 1;
        n -= 60;
    }
    secondes = n;
}

void Duree::Reset()
{
    heures = 0;
    minutes = 0;
    secondes = 0;
}

Duree::~Duree()
{
    //dtor
}
