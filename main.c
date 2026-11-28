#include <stdio.h>
#include <stdlib.h>
#include "entrada.h"
#include "calendario.h"

int main() {
    int anio = solicitarAnio();
    int mes = solicitarMes();
    int dia = solicitarDia();
    dia = verificarDia(dia, mes, anio);

    printf("El calendario es: %d/%d/%d\n", dia, mes, anio);
    mostrarCalendario(mes, anio, dia);
   
    return 0;
}

