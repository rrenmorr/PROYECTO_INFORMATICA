// NUMEROS DE MAYOR A MENOR

// Leer tres números y mostrarlos de menor a mayor.

#include <stdio.h>

int main () {
    float numeroUNO;
    float numeroDOS;
    float numeroTRES;
    float auxiliar;

    //PEDIR DATOS
    printf("Ingresar el primer numero: ");
    scanf("%f", &numeroUNO);

    printf("Ingresar el segundo numero: ");
    scanf("%f", &numeroDOS);

    printf("Ingresar el tercer numero: ");
    scanf("%f", &numeroTRES);

    //OPERACIONES
    if (numeroUNO > numeroDOS) {
        auxiliar = numeroUNO;
        numeroUNO = numeroDOS;
        numeroDOS = auxiliar;
    }

    if (numeroUNO > numeroTRES) {
        auxiliar = numeroUNO;
        numeroUNO = numeroTRES;
        numeroTRES = auxiliar;
    }

    if (numeroDOS > numeroTRES) {
        auxiliar = numeroDOS;
        numeroDOS = numeroTRES;
        numeroTRES = auxiliar;
    }

    //MOSTRAR DATOS
    printf("Numeros de menor a mayor: %.2f, %.2f, %.2f", numeroUNO, numeroDOS, numeroTRES);
}
