#include "Kalkulator.h"
#include "Operacija.h"
#include <iostream>

Kalkulator::Kalkulator() {
	Accumulator = 0;
	Name = 0;
}

Kalkulator::Kalkulator(char* a, int b) {
	Accumulator = 0;
	VelicinaSteka = b;

	int i = 0;
	while (a[i] != '\0') {
		i++;
	}
	int tmp = i;

	Name = new char[i];

	i = 0;
	while (i <= tmp) {
		Name[i] = a[i];
		i++;
	}

	Pointeri = new Operacija*[b];

	for (int i = 0; i < b; i++)
		Pointeri[i] = 0;
}

Kalkulator::~Kalkulator() {
	delete[] Name;
	Name = nullptr;

	delete[] Pointeri;
	Pointeri = nullptr;

}

void Kalkulator::Brisi(void) {
	Accumulator = 0;

	delete[] Pointeri;

}

void Kalkulator::PrintA(void) {
	std::cout << Accumulator;
}

void Kalkulator::Do(Operacija& NovaOperacija) {
	Operacija** tmpPointeri;
	tmpPointeri = new Operacija*[VelicinaSteka];

	for (int i = 0; i < VelicinaSteka; i++) {
		tmpPointeri[i] = Pointeri[i];
	}
	
	for (int i = 0; i < VelicinaSteka; i++) {
		delete[] Pointeri;
	}

	Pointeri = new Operacija*[VelicinaSteka + 1];
	for (int i = 0; i < VelicinaSteka; i++) {
		Pointeri[i] = tmpPointeri[i];
	}

	Pointeri[++VelicinaSteka] = &NovaOperacija;

	delete[] tmpPointeri;

	//Accumulator += ;//Drugi operand i operacija

	Accumulator = NovaOperacija.VratiDrugiOperand();
}

void Kalkulator::Undo(void) {
	if (VelicinaSteka > 0) {
		VelicinaSteka--;
		Operacija* DoUndo = Pointeri[VelicinaSteka];
		Accumulator = DoUndo->Suprotna()->DoOperation(Accumulator, DoUndo->VratiDrugiOperand());

		delete[] Pointeri[VelicinaSteka];
		Pointeri[VelicinaSteka] = 0;
	}

}


