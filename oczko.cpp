#include "oczko.h"


oczko::oczko()
{

}

void oczko::utworzGraczy()
{

	string imie;
	string imie2;


	cout << "Witaj w grze oczko. Zanim rozpoczniesz, wybierz graczy" << endl;
	cout << "Ilu graczy (steruje czlowiek) chcesz dodac (maksymalnie 8)?";
	cin >> iloscLudzi;

	while (!cin.good())
	{
		cout << "podano bledna informacje. Wprowadz dane jeszcze raz:" << endl;
		cin.clear();
		cin.sync();
		cin >> iloscLudzi;
	}


	if (iloscLudzi > 8)
	{
		iloscLudzi = 8;
	}

	for (int i = 0; i < iloscLudzi; i++)
	{
		tablicaGraczy[i] = new czlowiek;
		cout << "podaj imie gracza numer" << i + 1 << ":";
		cin >> imie;
		tablicaGraczy[i]->ustawImie(imie);
	}

	if (iloscLudzi < 8)
	{
		cout << "Ile komputerow (steruje S.I.) chcesz dodac(max " << 8 - iloscLudzi << ")?";
		cin >> iloscKomputerow;
	}

	while (!cin.good())
	{
		cout << "podano bledna informacje. Wprowadz dane jeszcze raz:" << endl;
		cin.clear();
		cin.sync();
		cin >> iloscKomputerow;
	}

	if (iloscKomputerow + iloscLudzi>8)
	{
		iloscKomputerow = 8 - iloscLudzi;
	}

	for (int i = iloscLudzi; i < iloscKomputerow + iloscLudzi; i++)
	{
		tablicaGraczy[i] = new komputer;
		imie2 = "S.I. #";
		imie2.append(1, i - iloscLudzi + '1');
		tablicaGraczy[i]->ustawImie(imie2);
	}

	iloscGraczy = iloscKomputerow + iloscLudzi;


}


void oczko::graj()
{
	koniec* pudelko = new koniec(iloscGraczy);
	talia = new Talia;
	talia->tasuj();

	for (int i = 0; i < iloscGraczy; i++)
	{
		tablicaGraczy[i]->dodajKarte(talia->dajKarte());
	}


	while (!pudelko->czyWszyscyZakonczyli())
	{



		for (int i = 0; i < iloscLudzi; i++)
		{
			cout << tablicaGraczy[i]->dajImie() << endl;
			tablicaGraczy[i]->wyswietlKarty();
			cout << "liczba punktow:" << tablicaGraczy[i]->policzPunkty() << "\n" << endl;
			cout << "aby kontynuowac wciœnij ENTER \n" << endl;
			_getch();
		}

		for (int i = 0; i < iloscLudzi; i++)
		{
			gracz* aktualnyGracz = tablicaGraczy[i];

			cout << aktualnyGracz->dajImie() << ":" << endl;

			if (!pudelko->czyZakonczylGracz(i) && aktualnyGracz->policzPunkty() < 21 && aktualnyGracz->czyNastepna() == true)
			{
				aktualnyGracz->dodajKarte(talia->dajKarte());
			}

			else
			{
				pudelko->zakonczylGracz(i);
				cout << "Zakonczyles gre z wynikiem:" << aktualnyGracz->policzPunkty() << "\n" << endl;
			}

		}


		for (int i = iloscLudzi; i < iloscKomputerow + iloscLudzi; i++)
		{

			gracz* aktualnyGracz = tablicaGraczy[i];
			if (!pudelko->czyZakonczylGracz(i) && aktualnyGracz->policzPunkty() < 21 && aktualnyGracz->czyNastepna() == true)
			{

				aktualnyGracz->dodajKarte(talia->dajKarte());
				cout << aktualnyGracz->dajImie() << "wzial karte \nWcisnij ENTER, aby kontynuowac \n \n";
				_getch();
				

			}

			else
			{
				pudelko->zakonczylGracz(i);
				cout << "gracz:" << aktualnyGracz->dajImie() << "zakonczyl gre z wynikiem:" << aktualnyGracz->policzPunkty() << "\n" << endl;
			}

		}
	}





}


void oczko::ktoWygral()
{
	gracz* zwyciezca = tablicaGraczy[0];

	for (int i = 1; i < iloscGraczy; i++)
	{
		gracz* aktualnyGracz = tablicaGraczy[i];
		if (aktualnyGracz->policzPunkty() <= 21)
		{
			if (aktualnyGracz->policzPunkty()> zwyciezca->policzPunkty())
			{
				zwyciezca = aktualnyGracz;
			}
		}

	}

	cout <<"wygral gracz: "<< zwyciezca->dajImie()<<"!!!!!!!!!" << endl;


}


bool oczko::jeszczeRaz()
{
	int a;
	cout << "czy chcesz zagrac jeszcze raz? 1=tak/ 2=nie?" << endl;
	cin >> a;

	if (a == 1)
	{
		return true;
	}

	else
	{
		cout << "koniec gry" << endl;
	}




}





oczko::~oczko()
{
	

}





