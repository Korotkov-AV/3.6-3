#include "Quadrangle.h"


Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) : Triangle(a, b, c, A, B, C) {
        name = "��������������: ";
        this->d = d;
        this->D = D;
    }

 void Quadrangle :: print() {
        std::cout << name << "\n�������: a=" << a << " b=" << b << " c=" << c << " d=" << d;
        std::cout << "\n����: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n\n";
    }
