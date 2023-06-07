#include <stdio.h>
#include <math.h>

int main() {
    
    
    double capital, interesAnual;
    int plazo;
    double montoMensual;
    double totalAmortizacion;
    double totalPagado;
    double interesMensual;
    double totalIntereses;
  

    printf("Ingrese el capital prestado: ");
    scanf("%lf", &capital);

    printf("Ingrese el número de años de duración del préstamo: ");
    scanf("%d", &plazo);
   
    printf("Ingrese el interés anual: ");
    scanf("%lf", &interesAnual);

   

    interesMensual = interesAnual / 12.0;
    double ratio = interesAnual / 100.0 / 12.0; 
    double factor = pow(1 + ratio, -plazo); 
    montoMensual = (capital * ratio) / (1 - factor); 
    totalPagado = montoMensual * plazo;
    totalAmortizacion = montoMensual - interesMensual;
    totalAmortizacion *= plazo;
    totalIntereses = totalPagado - totalAmortizacion;

    printf("La cuota que se debe pagar cada ves es de es: %.2lf\n", montoMensual);
    printf("El total del monto pagado al terminar el plazo es: %.2lf\n", totalPagado);
    printf("La cantidad de amortización es: %.2lf\n", totalAmortizacion);
    printf("La cantidad de intereses es: %.2lf\n", totalIntereses);

    return 0;
}
