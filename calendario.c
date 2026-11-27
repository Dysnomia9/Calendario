#include "calendario.h"
#include "stdio.h"

const char *mesNombre(int mes){
    const char *nombres[] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    return nombres[mes - 1];
}

int diasdelMes(int mes){
    int diasdelMes[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    return diasdelMes[mes - 1];

}


int verificarDia(int dia, int mes){
    
    while (dia < 1 && dia > diasdelMes(mes)){
        printf("El Dia es mayor o no coincide con la cantidad de dias del mes. \n");
        printf("Ingrese el dia: ");
        scanf("%d", &dia);
    };
    return dia;
}