#include <stdio.h>

int main() {
float sueldo_base, complemento_destino, complemento_cargo_academico;
int horas_extra_realizadas, num_hijos, num_mayores_dependientes;

// Pedir al usuario los datos
printf("Sueldo base: ");
scanf("%f", &sueldo_base);
printf("Complemento de destino: ");
scanf("%f", &complemento_destino);
printf("Complemento de cargo academico: ");
scanf("%f", &complemento_cargo_academico);
printf("Horas extra realizadas: ");
scanf("%d", &horas_extra_realizadas);
printf("Hijos: ");
scanf("%d", &num_hijos);
printf("Mayores: ");
scanf("%d", &num_mayores_dependientes);

// Calcular sueldo bruto
float sueldo_bruto = sueldo_base + complemento_destino + complemento_cargo_academico + (23 * horas_extra_realizadas);

// Calcular porcentaje de IRPF
float porcentaje_irpf = 24 - (2 * num_hijos) - num_mayores_dependientes;

// Calcular retención por IRPF
float retencion_irpf = (porcentaje_irpf / 100) * sueldo_bruto;

// Calcular sueldo neto
float sueldo_neto = sueldo_bruto - retencion_irpf;

// Mostrar los resultados
printf("\nCálculo de la nómina:\n");
printf("Sueldo base: %.2f $\n", sueldo_base);
printf("Complemento de destino: %.2f $\n", complemento_destino);
printf("Complemento de cargo académico: %.2f $\n", complemento_cargo_academico);
printf("Horas extra realizadas: %d\n", horas_extra_realizadas);
printf("Hijos: %d\n", num_hijos);
printf("Mayores: %d\n", num_mayores_dependientes);
printf("Sueldo bruto: %.2f $\n", sueldo_bruto);
printf("Porcentaje de IRPF: %.0f%%\n", porcentaje_irpf);
printf("Retención por IRPF: %.2f $\n", retencion_irpf);
printf("Sueldo neto: %.2f $\n", sueldo_neto);

return 0;
}
