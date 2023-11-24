#pragma once

#ifdef DYNAMICLIB_EXPORTS
#define EQUILATERAL_TRIANGLE_API __declspec(dllexport)
#else
#define EQUILATERAL_TRIANGLE_API __declspec(dllimport)
#endif

class Equilateral_triangle : public Triangle {
public:
	EQUILATERAL_TRIANGLE_API Equilateral_triangle(int a);
};