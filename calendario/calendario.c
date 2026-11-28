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


int verificarDia(int dia, int mes, int anio){
    
    while (dia < 1 || dia > diasdelMes(mes, anio)){
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

void mostrarCalendario(int mes, int anio, int dia){
    int i = 0;
    int inicio = primerDiaMes(mes, anio);
    int diasMax = diasdelMes(mes, anio);

    printf("\n      %s %d\n\n", mesNombre(mes), anio);
    printf("Lu Ma Mi Ju Vi Sa Do\n");

    for(i = 0; i < inicio; i++){
        printf("   ");
    }

    for(i = 0; i < diasMax; i++){
        if(i + 1 == dia){
            printf("\033[1;42;37m%2d\033[0m ", i + 1);
        }
        else{
            printf("%2d ", i + 1);
        }

        if((i + 1 + inicio) % 7 == 0){
            printf("\n");
        }
    }

    printf("\n\nCalendario Impreso\n");
}