#pragma once
#include <iostream>
#include "karta.h"
#include "talia.h"

using namespace std;


class gracz
{
protected:
	Karta* reka[10];
	int ileKart;
	string imie;

public:
	bool koniec;
	gracz();
	virtual void nowaGra()=0;
    void ustawImie(string imie);
	string dajImie();
	void dodajKarte(Karta*k);
	int policzPunkty();
	void wyswietlKarty();
	virtual bool czyNastepna()=0;
	
		
	~gracz();
};

