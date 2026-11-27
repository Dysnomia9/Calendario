#include <stdio.h>
#include <stdlib.h>

int solicitarMes();

int main() {
    int mes = solicitarMes(void);
    printf("El mes es: %d\n", mes);


    return 0;
}

int solicitarMes(void){
    int mes;
    printf("Ingrese el mes: ");
    scanf("%d", &mes);
    if(mes < 1 || mes > 12){
        printf("Mes invalido\n");
        return solicitarMes();
    }
    return mes;
}

