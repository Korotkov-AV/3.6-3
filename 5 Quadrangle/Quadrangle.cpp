#include "Quadrangle.h"


Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) : Triangle(a, b, c, A, B, C) {
        name = "Четырёхугольник: ";
        this->d = d;
        this->D = D;
    }

 void Quadrangle :: print() {
        std::cout << name << "\nСтороны: a=" << a << " b=" << b << " c=" << c << " d=" << d;
        std::cout << "\nУглы: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n\n";
    }
