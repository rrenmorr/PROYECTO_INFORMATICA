// TRES NUMEROS

// Leer tres números. Si el primero es negativo, mostrar el producto de los tres; si es cero, mostrar la suma; si es positivo, mostrar el promedio.

#include <stdio.h>

int main () {
    float numeroUNO;
    float numeroDOS;
    float numeroTRES;
    float resultado;

    //PEDIR DATOS
    printf("Ingresar el primer numero: ");
    scanf("%f", &numeroUNO);

    printf("Ingresar el segundo numero: ");
    scanf("%f", &numeroDOS);

    printf("Ingresar el tercer numero: ");
    scanf("%f", &numeroTRES);

    //OPERACIONES
    if (numeroUNO < 0) {
        resultado = numeroUNO * numeroDOS * numeroTRES;
        printf("El producto es: %.2f", resultado);
    }
    else if (numeroUNO == 0) {
        resultado = numeroUNO + numeroDOS + numeroTRES;
        printf("La suma es: %.2f", resultado);
    }
    else {
        resultado = (numeroUNO + numeroDOS + numeroTRES) / 3;
        printf("El promedio es: %.2f", resultado);
    }
}
