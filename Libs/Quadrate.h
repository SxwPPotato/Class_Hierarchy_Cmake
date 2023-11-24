#pragma once

#ifdef DYNAMICLIB_EXPORTS
#define QUADRATE_API __declspec(dllexport)
#else
#define QUADRATE_API __declspec(dllimport)
#endif


class Quadrate : public Rhomb {
public:
	QUADRATE_API Quadrate(int a);
};