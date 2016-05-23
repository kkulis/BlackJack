#pragma once
#include "gracz.h"


class komputer :
	public gracz
{
public:
	void nowaGra();
	bool czyNastepna();
	komputer();
	~komputer();
};

