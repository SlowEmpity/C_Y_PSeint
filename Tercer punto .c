#include <stdio.h>

int main() {
int segundos, horas, minutos, residuo;

printf("Ingrese el tiempo transcurrido en segundos: ");
scanf("%d", &segundos);


horas = segundos / 3600;
residuo = segundos % 3600;
minutos = residuo / 60;
segundos = residuo % 60;


printf("El tiempo transucurrido en segundo se resume a: %d horas, %d minutos, %d segundos\n", horas, minutos, segundos);

return 0;
}

