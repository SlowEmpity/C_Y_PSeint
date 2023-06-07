#include <stdio.h>

int main() {
float Fahrenheit, Celsius;

printf("Ingresa la temperatura en Fahrenheit: ");
scanf("%f", &Fahrenheit);

Celsius = (Fahrenheit - 32) * 5 / 9;

printf("La temperatura equivalente en Celsius es: %.2f\n", Celsius);

return 0;
}
