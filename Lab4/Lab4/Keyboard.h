#pragma once
#include "Periphery.h"
#include "string"

class Keyboard :
    public Periphery
{
private:
    int numOfButtons;
    std::string connection;
public:
    Keyboard();
    Keyboard(std::string name, int lifetime, int numOfButtons, std::string connection);
    void setNumOfButtons(int numOfButtons);
    void setTypeOfConnection(std::string connection);
    int getNumOfButtons();
    std::string getTypeOfConnection();
    void edit() override;
    void output() override;
};

