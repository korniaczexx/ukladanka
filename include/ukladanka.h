#ifndef UKLADANKA_H
#define UKLADANKA_H

#include <stdlib.h>
#include <time.h>

class ukladanka
{
    public:
        ukladanka();
        void losowanie();
        bool czyMoznaRuszyc(int x);
        bool czyRozwiazane();
        bool czyBylaWylosowana(int l, int tab[]);
        bool ruch(int r);
        int tablica[16];
        int pusty;
};

#endif // UKLADANKA_H
