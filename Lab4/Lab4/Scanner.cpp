#include "Scanner.h"
#include <iostream>

using namespace std;

Scanner::Scanner() : Periphery::Periphery() {
	dpi = 300;
}

Scanner::Scanner(string name, int lifetime, int dpi) : Periphery::Periphery(name, lifetime) {
	this->dpi = dpi;
}

void Scanner::setDpi(int dpi) {
	this->dpi = dpi;
}

int Scanner::getDpi() {
	return dpi;
}

void Scanner::edit() {
	Periphery::edit();
	int dpi;
	cout << "Введите кол-во dpi: ";
	cin >> dpi;
	this->dpi = dpi;
}

void Scanner::output() {
	Periphery::output();
	cout << "Количество dpi: " << dpi << endl;
}