#include "Periphery.h"
#include <iostream>

using namespace std;

Periphery::Periphery() {
	name = "";
	lifetime = 0;
}

Periphery::Periphery(string name, int lifetime) {
	this->name = name;
	this->lifetime = lifetime;
}

string Periphery::getName() {
	return name;
}

int Periphery::getLifetime() {
	return lifetime;
}

void Periphery::setName(string name) {
	this->name = name;
}

void Periphery::setLifetime(int lifetime) {
	this->lifetime = lifetime;
}

void Periphery::edit() {
	string name;
	int lifetime;
	cout << "������� ��������: ";
	cin >> name;
	cout << "������� ���� ������������: ";
	cin >> lifetime;
	this->name = name;
	this->lifetime = lifetime;
}

void Periphery::output() {
	cout << "��������: " << name << endl;
	cout << "���� ������������: " << lifetime << endl;
}