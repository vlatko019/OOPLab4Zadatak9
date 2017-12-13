#include "Operacija.h"
#include <iostream>

Operacija::Operacija(const char* Ime, int op) {
	Name = new char[strlen(Ime) + 1];
	strcpy(Name, Ime);

	DrugiOperand = op;
}

Operacija::~Operacija() {
	delete[] Name;
}

void Operacija::OperacijaInfo(void) {
	std::cout
		<< "Operacija"
		<< Name
		<< " "
		<< DrugiOperand
		<< " suprotna operacija"
		<< Suprotna()->Name
		<< std::endl;
}
