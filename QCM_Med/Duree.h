#ifndef DUREE_H
#define DUREE_H
#include <time.h>


class Duree
{
public:
    Duree();
    void Remplissage(clock_t n);
    void Reset();
    int secondes;
    int minutes;
    int heures;
    virtual ~Duree();

protected:

private:
};

#endif // DUREE_H
