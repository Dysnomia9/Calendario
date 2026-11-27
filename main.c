#include <stdio.h>
#include <stdlib.h>

int solicitarMes(void);
int solicitarAnio(void);
int solicitarDia(void);
int diasdelMes(int mes);
const char *mesNombre(int mes);


int main() {
    int mes = solicitarMes();
    printf("El mes es: %s\n", mesNombre(mes));
    printf("El mes tiene %d dias \n", diasdelMes(mes));

    int anio = solicitarAnio();
    printf("El año es: %d\n", anio);
    int dia = solicitarDia();
    printf("El dia es: %d\n", dia);

    printf("El calendario es: %d/%d/%d\n", dia, mes, anio);
    return 0;

}

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


const char *mesNombre(int mes){
    const char *nombres[] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    return nombres[mes - 1];
}

int diasdelMes(int mes){
    int diasdelMes[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    return diasdelMes[mes - 1];

}
