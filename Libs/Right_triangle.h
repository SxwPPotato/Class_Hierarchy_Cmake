#pragma once
#include "Figures.h"
#include "Triangle.h"

#ifdef DYNAMICLIB_EXPORTS
#define RIGHT_TRIANGLE_API __declspec(dllexport)
#else
#define RIGHT_TRIANGLE_API __declspec(dllimport)
#endif

class Right_triangle : public Triangle {
public:
	RIGHT_TRIANGLE_API Right_triangle(int a, int b, int c, int A, int B);
};