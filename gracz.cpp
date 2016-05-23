#include "gracz.h"



gracz::gracz()
{
	ileKart = 0;
	koniec = false;
}

void gracz::nowaGra()
{
	
}

void gracz::ustawImie(string imie)
{
	this->imie = imie;
}



string gracz::dajImie()
{
	return  imie;
}

void gracz::dodajKarte(Karta *k)
{
	reka[ileKart] = k;
	ileKart++;
}

int gracz::policzPunkty()
{
	int suma = 0;
	for(int i = 0; i < ileKart; i++)
	{
		suma += reka[i]->wartoscOczko();
	}

	return suma;

}

void gracz::wyswietlKarty()
{
	for (int i = 0; i < ileKart; i++)
	{
		cout << reka[i]->dajAwers() << endl;
	}
}







gracz::~gracz()
{
	
	if (reka!=NULL)
	{
		delete []&reka;
	}
	
}
