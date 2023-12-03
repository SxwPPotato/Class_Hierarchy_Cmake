#pragma once
#include "Figures.h"

class Quadrangle : public Figures {
protected:
    int a;
    int b;
    int c;
    int d;
    int A;
    int B;
    int C;
    int D;

public:
    Quadrangle();
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);
    void Show_figure() override;
};