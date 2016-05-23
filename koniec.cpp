#include "koniec.h"


koniec::koniec(int iloscGraczy)
{

	_iloscGraczy = iloscGraczy;
	
	for (int i = 0; i < _iloscGraczy; i++)
	{
		tablicaPrawdy[i] = false;
	}

	iloscPrawdy = 0;

}

bool koniec::czyWszyscyZakonczyli()
{
	return iloscPrawdy == _iloscGraczy;
}

bool koniec::czyZakonczylGracz(int index)
{
	return tablicaPrawdy[index];
}

void koniec::zakonczylGracz(int index)
{
	if (!tablicaPrawdy[index])
	{
		tablicaPrawdy[index] = true;
		iloscPrawdy++;
	}
		
}


koniec::~koniec()
{
}
