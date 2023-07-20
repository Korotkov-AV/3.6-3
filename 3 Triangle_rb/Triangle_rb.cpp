#include "Triangle_rb.h"

Triangle_rb :: Triangle_rb(int b, int c, int A) : Triangle(b, b, c, A, A, 180 - 2 * A) {
        name = "Равнобедренный треугольник: ";
  }