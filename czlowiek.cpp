#include "czlowiek.h"


czlowiek::czlowiek()
{
	koniec = false;
}

void czlowiek::nowaGra()
{
	for (int i = 0; i < 10; i++)
	{
		reka[i] = NULL;
	}

	ileKart = 0;

}


bool czlowiek::czyNastepna()
{
	int a;
	cout << "Czy chcesz nastepna karta? 1=tak/2=nie?" << endl;
	cin >> a;
	
	if (a == 1)
	{
		return true;
	}
	koniec = true;
	return false;

}
