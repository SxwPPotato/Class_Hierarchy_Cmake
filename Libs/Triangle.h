#pragma once
#include "Figures.h"

class Triangle : public Figures {
protected:
    int a;
    int b;
    int c;
    int A;
    int B;
    int C;

public:
    Triangle();
    Triangle(int a, int b, int c, int A, int B, int C);
    void Show_figure() override;
    
};