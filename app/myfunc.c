
#include <stdio.h>
#include <math.h>
#include "myfunc.h"

struct Roots {
	double root1;
	double root2;
};

// Функция для вычисления корней квадратного уравнения
double formula(double a, double b, double c) {
    if (a == 0) {
        return -222; // Это не квадратное уравнение, так как a = 0
    }

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
		Roots ret;
        ret.root1 = (-b + sqrt(discriminant)) / (2 * a);
        ret.root2 = (-b - sqrt(discriminant)) / (2 * a);
		return ret; //  Уравнение имеет два корня: root1, root2
		
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
		return root; // Уравнение имеет один корень
		
    } else {
		return -111; // Уравнение не имеет вещественных корней, так как дискриминант меньше 0
    }
}
