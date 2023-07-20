#pragma once
#include "../1 Triangle/Triangle.h"

class Quadrangle : public Triangle {
public:
    int d;
    int D;
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);

    virtual void print();
};