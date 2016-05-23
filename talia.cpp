#include "talia.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
Talia::Talia(int ilosc)
    :talia(NULL),ilosc(ilosc),licznik(0)
{
    talia=new Karta[ilosc];
    int p=ilosc/4;
    
    for(int i=0;i<4;i++)
        for(int j=0;j<p;j++)
        {
            
            talia[i*p+j].ustawWartosc(12-j);
            talia[i*p+j].ustawKolor(i);
        }
}

Talia::~Talia()
{
    if(talia) 
        delete []talia;
}

void Talia::wyswietl()
{
    for(int i=0;i<ilosc;i++)
        cout<<talia[i].dajAwers()<<endl;
}

void Talia::tasuj()
{
    srand(time(NULL));
    for(int i=0;i<ilosc;i++)
    {
        int x=rand()%ilosc,y=rand()%ilosc;
        Karta k;
        k=talia[x];
        talia[x]=talia[y];
        talia[y]=k;
    }

}

Karta *Talia::dajKarte()
{
    
    return &talia[licznik++];
}

