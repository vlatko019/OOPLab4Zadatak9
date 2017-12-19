# OOPLab4Zadatak9

Zadatak 9:
Na programskom jeziku C++ kreirati klasu Kalkulator koja od privatnih atributa sadrži akumulator (int), naziv(char*) i niz pointera tipa Operacija koji treba da funkcioniše kao stek. Klasa sadrži i sledeće javne funkcije:  
•	konstruktor koji postavlja naziv, broj elemenata niza i zauzima potreban prostor u memoriji,  
•	destruktor,  
•	funkciju koja postavlja akumulator na 0 i briše stek operacija,  
•	funkciju koja štampa stanje akumulatora,  
•	funkciju Do(Operacija& novaOperacija) koja dodaje novaOperacija u stek i izvršava je tako što se kao op1 prosleđuje vrednost akumulatora a kao op2 vrednost drugog operanda iz novaOperacija. Rezultat se smešta u akumulator.  
•	funkciju Undo koja uzima zadnju operaciju sa steka i izvršava njenu suprotnu operaciju gde je op1 vrednost akumulatora a op2 vrednost drugog operanda iz zadnje operacije.  
Kreirati apstraktnu klasu Operacija koja od zaštićenih atributa sadrži naziv (char*), drugiOperand (int) i suprotnaOperacija(Operacija*):  
•	funkciju koja vraća suprotnu operaciju,  
•	funkciju koja vraća drugi operand,  
•	funkciju za prikaz podataka o operaciji (naziv, drugi operand i naziv suprotne operacije),  
•	čistu virtuelnu funkciju DoOperation(int op1, int op2) čiji je povratni tip int.  
Kreirati klasu Množenje koja je javno izvedena iz klase Operacija. Od javnih metoda sadrži:  
•	konstruktor koji postavlja sve atribute.  
Kreirati klasu Deljenje koja je javno izvedena iz klase Operacija. Od javnih metoda sadrži:  
•	konstruktor koji postavlja sve atribute.  
U funkciji main napraviti Kalkulator sa baferom za 14 operacija. Izvršiti nekoliko množenja i deljenja a onda primeniti par undo operacija. Štampati sadržaj akumulatora nakon svake izvršene operacije.  
