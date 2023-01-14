#include "ukladanka.h"
#include <algorithm>
#include <iostream>

ukladanka::ukladanka()
{
    srand(time(NULL));
    losowanie();
}

bool ukladanka::czyBylaWylosowana(int l, int tab[])
{
    for (int i=0; i<16; i++)
    {
        if (tab[i]==l) return true;
    }
    return false;
}

void ukladanka::losowanie()
{
    for(int i=0; i<16; i++)
    {
        tablica[i] = -1;
    }

    for(int i=0; i<16;)
    {
        int los = rand()%16;
        if (!czyBylaWylosowana(los, tablica))
        {
            tablica[i] = los;
            ++i;
        }
    }
    pusty=15;
}


bool ukladanka::czyMoznaRuszyc(int x)
{
    /* if ((x == (pusty - 1)) || (x == (pusty + 1)) || (x == pusty - 4) || (x == (pusty + 4))) {
         if ((x == (pusty - 1)) && ((pusty % 4) == 3)) {
             return false;
         }
         if ((x == (pusty + 1)) && ((pusty % 4) == 0)) {
             return false;
         }
         return true;
     }
     return false;
    */

    if (x == pusty - 4 || x == pusty + 4)
    {
        return true;
    }
    if (x == pusty - 1 && x % 4 != 3)
    {
        return true;
    }
    if (x == pusty + 1 && x % 4 != 0)
    {
        return true;
    }
    return false;
}

bool ukladanka::ruch(int r)
{
    if (czyMoznaRuszyc(r))
    {
        std::swap( tablica[r], tablica[pusty] );
        pusty = r;
        return true;
    }
    return false;
}

bool ukladanka::czyRozwiazane()
{
    for (int i = 0; i < 16; i++)
    {
        if (!(tablica[i] == i))
        {
            return false;
        }
    }
    return true;
}
