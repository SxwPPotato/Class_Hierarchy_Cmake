#pragma once
#include "Figures.h"

#ifdef DYNAMICLIB_EXPORTS
#define QUADRANGLE_API __declspec(dllexport)
#else
#define QUADRANGLE_API __declspec(dllimport)
#endif


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
    QUADRANGLE_API Quadrangle();
    QUADRANGLE_API Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);
    QUADRANGLE_API void Show_figure() override;
};