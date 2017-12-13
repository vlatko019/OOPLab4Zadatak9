#pragma once
#include "Operacija.h"

class Kalkulator {
private:
	int Accumulator;
	char* Name;
	Operacija** Pointeri;
	int VelicinaSteka;

public:
	Kalkulator();
	Kalkulator(char* a, int b);
	~Kalkulator();
	void Brisi(void);
	void PrintA(void); // stampa akumulator
	void Do(Operacija& NovaOperacija);
	void Undo(void);
};
