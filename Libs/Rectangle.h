#pragma once

#ifdef DYNAMICLIB_EXPORTS
#define RECTANGLE_API __declspec(dllexport)
#else
#define RECTANGLE_API __declspec(dllimport)
#endif

class Rectangle : public Parallelogram {
public:
    RECTANGLE_API Rectangle(int a, int b);
};