#pragma once
#include "Periphery.h"
#include <string>

class Scanner :
    public Periphery
{
private:
    int dpi;
public:
    Scanner();
    Scanner(std::string name, int lifetime, int dpi);
    void setDpi(int dpi);
    int getDpi();
    void edit() override;
    void output() override;
};

