#include <stdio.h>

#define PI 3.14159265359

float calcularVolumenCono(float radio, float altura) {
return (PI * radio * radio * altura) / 3;
}

int main() {
float radio = 14.5;
float altura = 26.79;
float volumen = calcularVolumenCono(radio, altura);

printf("El volumen del cono es: %.2f\n", volumen);

return 0;
}
