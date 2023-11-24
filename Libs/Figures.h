#pragma once
#include <string>

#ifdef DYNAMICLIB_EXPORTS
#define FIGURES_API __declspec(dllexport)
#else
#define FIGURES_API __declspec(dllimport)
#endif

class Figures {
protected:
    std::string Name_of_figure;
public:
    FIGURES_API void Show_name();
    FIGURES_API virtual void Show_figure();
  
};



FIGURES_API void print_info(Figures* figure);