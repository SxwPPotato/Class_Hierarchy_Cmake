cmake_minimum_required(VERSION 3.22.2)
project(Figures.DLL)
set(SOURCE_DLL Equilateral_triangle.h Equilateral_triangle.cpp Figures.h Figures.cpp Isosceles_triangle.h Isosceles_triangle.cpp Parallelogram.h Parallelogram.cpp Quadrangle.h Quadrangle.cpp Quadrate.h Quadrate.cpp Rectangle.h Rectangle.cpp Rhomb.h Rhomb.cpp Right_triangle.h Right_triangle.cpp Triangle.h Triangle.cpp)
add_library (Figures.DLL SHARED ${SOURCE_DLL})