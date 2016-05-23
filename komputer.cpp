#include "komputer.h"


komputer::komputer()
{

}




void komputer::nowaGra()
{
	for (int i = 0; i < 10; i++)
	{
		reka[i] = NULL;
	}

	ileKart = 0;
	
}


bool komputer::czyNastepna()
{
	if (policzPunkty() < 17)
	{
		return true;
	}

	return false;

}
