#pragma once
#include "Operacija.h"
class Mnozenje : public Operacija {
public:
	Mnozenje(char*, int);
	Mnozenje(int);
	~Mnozenje();

	virtual int DoOperation(int op1, int op2);
	virtual Operacija* Suprotna();
};

