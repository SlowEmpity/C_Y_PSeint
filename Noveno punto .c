#include <stdio.h>
#include <math.h>

int main() {
double lado1, lado2, angulo, area;

printf("Ingrese el valor del lado 1: ");
scanf("%lf", &lado1);
printf("Ingrese el valor del lado 2: ");
scanf("%lf", &lado2);
printf("Ingrese el valor del ángulo (en grados): ");
scanf("%lf", &angulo);


angulo = angulo * (M_PI / 180);


area = 0.5 * lado1 * lado2 * sin(angulo);


printf("El área del triángulo es: %.2lf  \n", area);

return 0;
}
