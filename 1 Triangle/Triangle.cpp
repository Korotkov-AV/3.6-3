#include "Triangle.h"


 Triangle::Triangle(int a, int b, int c, int A, int B, int C) {
    name = "Треугольник: ";
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }


     void Triangle :: print() {
        std::cout << name << "\nСтороны: a=" << a << " b=" << b << " c=" << c;
        std::cout << "\nУглы: A=" << A << " B=" << B << " C=" << C << "\n\n";
    }