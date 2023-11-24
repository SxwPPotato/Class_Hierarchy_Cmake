#pragma once
#include "Parallelogram.h"

#ifdef DYNAMICLIB_EXPORTS
#define RHOMB_API __declspec(dllexport)
#else
#define RHOMB_API __declspec(dllimport)
#endif

class Rhomb : public Parallelogram {
public:
    RHOMB_API Rhomb();
    RHOMB_API Rhomb(int a, int A, int B);
};