#include "Mnozenje.h"
#include "Deljenje.h"

Mnozenje::Mnozenje(char* NewName, int op) : Operacija(NewName, op) {

}

Mnozenje::Mnozenje(int op) : Operacija("Mnozenje", op) {

}


Mnozenje::~Mnozenje() {

}

int Mnozenje::DoOperation(int op1, int op2) {
	return (op1 * op2);
}

Operacija * Mnozenje::Suprotna() {
	return new Deljenje(this->VratiDrugiOperand());
}

