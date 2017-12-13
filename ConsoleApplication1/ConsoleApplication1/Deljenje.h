#pragma once
#include "Operacija.h"
class Deljenje : public Operacija {
public:
	Deljenje(char*, int);
	Deljenje(int);
	~Deljenje();

	virtual int DoOperation(int op1, int op2);
	virtual Operacija* Suprotna();
};

