#pragma once
#include <string>


class Figures {
protected:
    std::string Name_of_figure;
public:
    void Show_name();
    virtual void Show_figure();
  
};



void print_info(Figures* figure);