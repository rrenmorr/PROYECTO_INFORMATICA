// MESES

// Leer un mes (1 a 12) y un año. Mostrar el nombre del mes y cuántos días tiene, considerando años bisiestos para febrero. Si el mes no es válido, mostrar “Error de opción”.

#include <stdio.h>

int main () {
    int mes;
    int a;
    int dias;

    //PEDIR DATOS
    printf("Ingresa el numero del mes: ");
    scanf("%d", &mes);

    printf("Ingresa el a: ");
    scanf("%d", &a);

    //OPERACIONES
    if (mes == 1) {
        printf("Enero");
        dias = 31;
    }
    else if (mes == 2) {
        printf("Febrero");

        if (a % 400 == 0 || (a % 4 == 0 && a % 100 != 0)) {
            dias = 29;
        }
        else {
            dias = 28;
        }
    }
    else if (mes == 3) {
        printf("Marzo");
        dias = 31;
    }
    else if (mes == 4) {
        printf("Abril");
        dias = 30;
    }
    else if (mes == 5) {
        printf("Mayo");
        dias = 31;
    }
    else if (mes == 6) {
        printf("Junio");
        dias = 30;
    }
    else if (mes == 7) {
        printf("Julio");
        dias = 31;
    }
    else if (mes == 8) {
        printf("Agosto");
        dias = 31;
    }
    else if (mes == 9) {
        printf("Septiembre");
        dias = 30;
    }
    else if (mes == 10) {
        printf("Octubre");
        dias = 31;
    }
    else if (mes == 11) {
        printf("Noviembre");
        dias = 30;
    }
    else if (mes == 12) {
        printf("Diciembre");
        dias = 31;
    }
    else {
        printf("Error de opcion");
        dias = 0;
    }

    //MOSTRAR DATOS
    if (dias != 0) {
        printf("\nCantidad de dias = %d", dias);
    }
}
