#include <string.h>
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
    int inicio = primerDiaMes(mes, anio);
    int diasMax = diasdelMes(mes, anio);
    int ancho = 21;

    char titulo[50];

    snprintf(titulo, sizeof(titulo),
             "%s %d", mesNombre(mes), anio);

    int longitud = strlen(titulo);
    int izquierda = (ancho - longitud) / 2;
    int derecha = ancho - longitud - izquierda;


    printf("\n+---------------------+\n");

    printf("|%*s\033[36m%s\033[0m%*s|\n",
           izquierda, "", titulo, derecha, "");

    printf("+---------------------+\n");

    printf("|Lu Ma Mi Ju Vi \033[31mSa Do\033[0m |\n");

    printf("+---------------------+\n");

    printf("|");

    for(int i = 0; i < inicio; i++){
        printf("   ");
    }


    for(int i = 0; i < diasMax; i++){

        int columna = (i + inicio) % 7;

        if(i + 1 == dia){
            printf("\033[1;42;37m%2d\033[0m ", i + 1);
        }
        else if(columna == 5 || columna == 6){
            printf("\033[31m%2d\033[0m ", i + 1);
        }
        else{
            printf("%2d ", i + 1);
        }

        if(columna == 6){
            printf("|\n");

            if(i + 1 < diasMax){
                printf("|");
            }
        }
    }

    int restantes = (inicio + diasMax) % 7;

    if(restantes != 0){

        for(int i = restantes; i < 7; i++){
            printf("   ");
        }

        printf("|\n");
    }
    printf("+---------------------+\n");

    printf("\nFecha seleccionada: %02d/%02d/%d\n",
           dia, mes, anio);
}