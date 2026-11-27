#include <stdio.h>
#include <stdlib.h>

int solicitarMes(void);
int solicitarAnio(void);

int main() {
    int mes = solicitarMes();
    printf("El mes es: %d\n", mes);
    int anio = solicitarAnio();
    printf("El año es: %d\n", anio);
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
        printf("Anio invalido ingrese nuevamente: ");
        scanf("%d", &anio);
    }
    return anio;
}