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
	cout << "������� ���������� ������� �� ����������: ";
	cin >> numOfButtons;
	cout << "������� ��� �����������: ";
	cin >> connection;
	this->numOfButtons = numOfButtons;
	this->connection = connection;
}

void Keyboard::output() {
	Periphery::output();
	cout << "���-�� �������: " << numOfButtons << endl;
	cout << "��� �����������: " << connection << endl;
}