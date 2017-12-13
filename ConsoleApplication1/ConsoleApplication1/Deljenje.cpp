#include "Deljenje.h"
#include "Mnozenje.h"

Deljenje::Deljenje(char* NewName, int op) : Operacija(NewName, op) {
	
}

Deljenje::Deljenje(int op) : Operacija("Deljenje", op) {

}


Deljenje::~Deljenje() {

}

int Deljenje::DoOperation(int op1, int op2) {
	return (op1 / op2);
}

Operacija * Deljenje::Suprotna() {
	return new Mnozenje(this->VratiDrugiOperand());
}
