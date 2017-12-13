#pragma once
class Operacija {
private:
	char* Name;
	int DrugiOperand;
	Operacija* SuprotnaOperacija;

public:
	Operacija(const char*, int);
	virtual ~Operacija();
	virtual Operacija* Suprotna(void) = 0;
	inline virtual int VratiDrugiOperand(void) { return DrugiOperand; };
	virtual void OperacijaInfo(void);
	//•	funkciju za prikaz podataka o operaciji 
	//(naziv, drugi operand i naziv suprotne operacije)
	virtual int DoOperation(int op1, int op2) = 0;

};
