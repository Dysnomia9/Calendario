#include <stdio.h>
#include <stdlib.h>
#include "entrada.h"
#include "calendario.h"



int main() {
    int mes = solicitarMes();
    printf("El mes es: %s\n", mesNombre(mes));
    printf("El mes tiene %d dias \n", diasdelMes(mes));

    int dia = solicitarDia();
    dia = verificarDia(dia, mes);
   
    printf("El dia es: %d\n", dia);
    
    int anio = solicitarAnio();
    printf("El año es: %d\n", anio);


    printf("El calendario es: %d/%d/%d\n", dia, mes, anio);
    return 0;

}

