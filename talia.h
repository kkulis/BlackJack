#ifndef TALIA_H
#define TALIA_H
#include "karta.h"

class Talia
{
    Karta *talia;
    int ilosc;   
    int licznik; 
public:
    Talia(int ilosc=52);
    ~Talia();
    void wyswietl();
    void tasuj();
    Karta *dajKarte();
    inline int dajIlosc(){return ilosc;}
    inline int ileZostalo(){return ilosc-licznik;}
};

#endif 
