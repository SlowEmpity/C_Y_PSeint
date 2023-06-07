Algoritmo CalculoNomina
    Definir sueldoBase, complementoDestino, complementoCargoAcademico, horasExtra, hijos, mayores, sueldoBruto, impuestos, retencionIRPF, sueldoNeto Como Real
	
    Escribir "Sueldo base: "
    Leer sueldoBase
	
    Escribir "Complemento de destino: "
    Leer complementoDestino
	
    Escribir "Complemento de cargo académico: "
    Leer complementoCargoAcademico
	
    Escribir "Horas extra realizadas: "
    Leer horasExtra
	
    Escribir "Hijos: "
    Leer hijos
	
    Escribir "Mayores: "
    Leer mayores
	
    sueldoBruto <- sueldoBase + complementoDestino + complementoCargoAcademico + (horasExtra * 23)
	
    impuestos <- 24 - (2 * hijos) - (1 * mayores)
	
    retencionIRPF <- (sueldoBruto * impuestos) / 100
	
    sueldoNeto <- sueldoBruto - retencionIRPF
	
    Escribir "Cálculo de la nómina:"
    Escribir "Sueldo base: ", sueldoBase, " $"
    Escribir "Complemento de destino: ", complementoDestino, " $"
    Escribir "Complemento de cargo académico: ", complementoCargoAcademico, " $"
    Escribir "Horas extra realizadas: ", horasExtra
    Escribir "Hijos: ", hijos
    Escribir "Mayores: ", mayores
    Escribir "Sueldo bruto: ", sueldoBruto, " $"
    Escribir "Porcentaje de IRPF: ", impuestos, "%"
    Escribir "Retención por IRPF: ", retencionIRPF, " $"
    Escribir "Sueldo neto: ", sueldoNeto, " $"
	
FinAlgoritmo
