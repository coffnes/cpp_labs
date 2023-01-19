#include <iostream>

#pragma once
class MetroTrain
{
private:
	int numOfPassengers;
	int speed;
	bool isDrive;
	std::string startPoint;
	std::string endPoint;
public:
	MetroTrain();
	int getNumOfPassengers();
	int getSpeed();
	bool getIsDrive();
	std::string getStartPoint();
	std::string getEndPoint();
	void addPassenger(int numOfPas);
	void removePassenger(int numOfPas);
	void changeMovement();
	void setSpeed(int speed);
	void setStartPoint(std::string startPoint);
	void setEndPoint(std::string endPoint);
	void screenOutput();
};

