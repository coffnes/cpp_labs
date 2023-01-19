#include "MetroTrain.h"
#include <iostream>

using namespace std;

MetroTrain::MetroTrain() {
	numOfPassengers = 0;
	speed = 0;
	isDrive = false;
	startPoint = "depo";
	endPoint = "depo";
}

int MetroTrain::getNumOfPassengers() {
	return numOfPassengers;
}

int MetroTrain::getSpeed() {
	return speed;
}

bool MetroTrain::getIsDrive() {
	return isDrive;
}

string MetroTrain::getStartPoint() {
	return startPoint;
}

string MetroTrain::getEndPoint() {
	return endPoint;
}

void MetroTrain::addPassenger(int numOfPas) {
	numOfPassengers += numOfPas;
}

void MetroTrain::removePassenger(int numOfPas) {
	if (numOfPas <= numOfPassengers) {
		numOfPassengers -= numOfPas;
	}
}
void MetroTrain::changeMovement() {
	isDrive = !isDrive;
}

void MetroTrain::setSpeed(int speed) {
	this->speed = speed;
}

void MetroTrain::setStartPoint(string startPoint) {
	this->startPoint = startPoint;
}

void MetroTrain::setEndPoint(string endPoint) {
	this->endPoint = endPoint;
}

void MetroTrain::screenOutput() {
	cout << "Количество пассажиров в вагоне: " << numOfPassengers << endl;
	cout << "Скорость: " << speed << endl;
	cout << "Находится в движении " << isDrive << endl;
	cout << "Отправная станция: " << startPoint << endl;
	cout << "Конечная станция: " << endPoint << endl;
}