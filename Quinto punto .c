#include <stdio.h>

int main()
{

printf("Hola, puedes definir las siguientes variables para la operación:\n");

int a;
printf("Define el valor de la variable 'a': \n");
scanf("%d", &a);

int b;
printf("Define el valor de la variable 'b': \n");
scanf("%d", &b);

int c;
printf("Define el valor de la variable 'c': \n");
scanf("%d", &c);

int d;
printf("Define el valor de la variable 'd': \n");
scanf("%d", &d);

int r;
printf("Define el valor de la variable 'r': \n");
scanf("%d", &r);

int resultado = (4/( 3 * (r + 34))) - (9 * (a + b * c)) + (3 + d * (2 + a) / (a + b * d));

printf("El resultado es: %d\n", resultado);

return 0;
}



 
