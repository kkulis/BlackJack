#include <iostream>
#include "karta.h"
#include "talia.h"
#include "gracz.h"
#include "oczko.h"
using namespace std;

int main()
{
   oczko o;
   do
   {
	   o.utworzGraczy();
	   o.graj();
	   o.ktoWygral();
	  
   } while(o.jeszczeRaz()==true);
   
   
	

    return 0;
}

