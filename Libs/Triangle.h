#pragma once
#include "Figures.h"
#ifdef DYNAMICLIB_EXPORTS
#define TRIANGLE_API __declspec(dllexport)
#else
#define TRIANGLE_API __declspec(dllimport)
#endif

class Triangle : public Figures {
protected:
    int a;
    int b;
    int c;
    int A;
    int B;
    int C;

public:
    TRIANGLE_API Triangle();
    TRIANGLE_API Triangle(int a, int b, int c, int A, int B, int C);
    TRIANGLE_API void Show_figure() override;
    
};