#pragma once
#include <string>

class Periphery
{
public:
	Periphery();
	Periphery(std::string name, int lifetime);
	std::string getName();
	int getLifetime();
	void setName(std::string name);
	void setLifetime(int lifetime);
	virtual void edit();
	virtual void output();
private:
	std::string name;
	int lifetime;
};

