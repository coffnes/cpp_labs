#include "Keyboard.h"
#include <iostream>

using namespace std;

Keyboard::Keyboard() :Periphery::Periphery() {
	numOfButtons = 104;
	connection = "usb";
}

Keyboard::Keyboard(string name, int lifetime, int numOfButtons, string connection):
	Periphery::Periphery(name, lifetime) {
	this->numOfButtons = numOfButtons;
	this->connection = connection;
}

void Keyboard::setNumOfButtons(int numOfButtons) {
	this->numOfButtons = numOfButtons;
}

void Keyboard::setTypeOfConnection(string connection) {
	this->connection = connection;
}

int Keyboard::getNumOfButtons() {
	return numOfButtons;
}
string Keyboard::getTypeOfConnection() {
	return connection;
}

void Keyboard::edit() {
	Periphery::edit();
	int numOfButtons;
	string connection;
	cout << "Введите количетсво клавишь на клавиатуре: ";
	cin >> numOfButtons;
	cout << "Введите тип подключения: ";
	cin >> connection;
	this->numOfButtons = numOfButtons;
	this->connection = connection;
}

void Keyboard::output() {
	Periphery::output();
	cout << "Кол-во клавишь: " << numOfButtons << endl;
	cout << "Тип подключения: " << connection << endl;
}