#include "calendario.h"
#include "stdio.h"

const char *mesNombre(int mes){
    const char *nombres[] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    return nombres[mes - 1];
}

int diasdelMes(int mes, int anio){
    int diasdelMes[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    
    if(mes == 2 && esBisiesto(anio)){
        return 29;
    }

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


int primerDiaMes(int mes, int anio){
    long long totalDias = 0;

    for(int i = 1; i < anio; i++){
        if(esBisiesto(i)){
            totalDias += 366;
        }
        else{
            totalDias += 365;
        }
    }

    for(int i = 1; i < mes; i++){
        totalDias += diasdelMes(i, anio);
    }

    return totalDias % 7;
}