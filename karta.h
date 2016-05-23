#ifndef KARTA_H
#define KARTA_H
#include <string>
using namespace std;

class Karta
{
    int wartosc,kolor;
    string awers;
public:
   
    Karta(int wartosc=0,int kolor=0);
    void ustawWartosc(int wartosc);
    void ustawKolor(int kolor);
    int dajWartosc();
    int dajKolor();
    inline string dajAwers(){return awers;}

    int wartoscOczko();

private:
    void aktualizuj();

};

#endif 
