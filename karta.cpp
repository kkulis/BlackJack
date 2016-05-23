#include "karta.h"
using namespace std;



Karta::Karta(int wartosc, int kolor):wartosc(wartosc),kolor(kolor)
{
    aktualizuj();
}

void Karta::ustawWartosc(int wartosc)
{
    if(wartosc<13)
        this->wartosc=wartosc;
    aktualizuj();
}

void Karta::ustawKolor(int kolor)
{
    if(kolor<4)
        this->kolor=kolor;
    aktualizuj();
}

int Karta::dajWartosc()
{
    return wartosc;
}

int Karta::dajKolor()
{
    return kolor;
}

int Karta::wartoscOczko()
{
    return (wartosc<12)?wartosc%9+2:11;
}



void Karta::aktualizuj()
{
	string figury[13] = {
		"2", "3", "4", "5", "6", "7", "8", "9", "10",
		"J", "Q", "K", "A"
	};
	string kolory[4] = {
		" pik", " trefl", " karo", " kier"
	};
	awers = figury[wartosc] + kolory[kolor];
}







