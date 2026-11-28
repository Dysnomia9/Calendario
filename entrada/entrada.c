#include "entrada.h"
#include <stdio.h>


int solicitarMes(void){
    int mes;
    printf("Ingrese el mes: ");
    scanf("%d", &mes);
    while(mes < 1 || mes > 12){
        printf("Mes invalido ingrese nuevamente: ");
        scanf("%d", &mes);
    }
    return mes;
}

int solicitarAnio(void){
    int anio;
    printf("Ingrese el anio: ");
    scanf("%d", &anio);
    while(anio < 1){
        printf("Año invalido ingrese nuevamente: ");
        scanf("%d", &anio);
    }
    return anio;
}

int solicitarDia(void){
    int dia;
    printf("Ingrese el dia: ");
    scanf("%d", &dia);
    while(dia < 1 || dia > 31){
        printf("Dia invalido ingrese nuevamente: ");
        scanf("%d", &dia);
    }
    return dia;
}

int esBisiesto(int anio){
    return (anio % 400 == 0) || 
           (anio % 4 == 0 && anio % 100 != 0);
}