#pragma once

#ifdef DYNAMICLIB_EXPORTS
#define PARALLELOGRAM_API __declspec(dllexport)
#else
#define PARALLELOGRAM_API __declspec(dllimport)
#endif

class Parallelogram : public Quadrangle {
public:
    PARALLELOGRAM_API Parallelogram();
    PARALLELOGRAM_API Parallelogram(int a, int b, int A, int B);
};