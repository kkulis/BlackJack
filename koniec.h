#pragma once



class koniec
{
private:
	bool tablicaPrawdy[10];
	int iloscPrawdy;
	int _iloscGraczy;
public:
	void zakonczylGracz(int index);
	bool czyWszyscyZakonczyli();
	bool czyZakonczylGracz(int index);
    koniec(int iloscGraczy);
	~koniec();
};

