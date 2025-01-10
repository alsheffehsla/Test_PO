
#include <stdio.h>
#include <math.h>
#include "myfunc.h"



// Функция для вычисления корней квадратного уравнения
void formula(double a, double b, double c, double* root1, double* root2) {
    if (a == 0) {
        *root1= -222; // Это не квадратное уравнение, так как a = 0
    }

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {

        *root1 = (-b + sqrt(discriminant)) / (2 * a);
        *root2 = (-b - sqrt(discriminant)) / (2 * a); //  Уравнение имеет два корня: root1, root2
		
    } else if (discriminant == 0) {
        *root1 = -b / (2 * a); // Уравнение имеет один корень
		
    } else {
		*root1 = -111; // Уравнение не имеет вещественных корней, так как дискриминант меньше 0
    }
}
