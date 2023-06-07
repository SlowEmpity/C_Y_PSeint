#include <stdio.h>

int main() {
int x = 12;
float sigma = 2.1836;
int y = 3;
float lambda = 1.11695;
float alfa = 328.67;
float f;

f = 3 * x * ((x + sigma) * x * y) / ((x * x) - (y * y)) - lambda * x * (alfa - 13.7);

printf("El valor de la funcion f es: %f\n", f);

return 0;
}
