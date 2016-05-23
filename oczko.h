#pragma once
#include <conio.h>
#include "gracz.h"
#include "talia.h"
#include "karta.h"
#include "czlowiek.h"
#include "komputer.h"
#include "koniec.h"


class oczko
{
	
	gracz* tablicaGraczy[10];
	int iloscGraczy;
	Talia* talia;
	int iloscLudzi = 0;
	int iloscKomputerow = 0;
public:
	
	oczko();
	void utworzGraczy();
	void graj();
	void ktoWygral();
	bool jeszczeRaz();
	


	~oczko();
};

