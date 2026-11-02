// CAMBIO

//Dado el costo de una compra y el dinero entregado por el cliente, calcular elcambio y desglosarlo en billetes y monedas (500, 200, 100, 50, 20, 10, 5, 2 y 1).

#include <stdio.h>

int main() {
    int costo, dinero, cambio;

    printf("Ingresa el costo de la compra: ");
    scanf("%d", &costo);

    printf("Ingresa el dinero entregado por el cliente: ");
    scanf("%d", &dinero);

    if (dinero < costo) {
        printf("El dinero entregado no es suficiente.\n");
    } else {
        cambio = dinero - costo;

        printf("\nCambio: $%d\n", cambio);

        printf("Billetes y monedas:\n");

        printf("$500: %d\n", cambio / 500);
        cambio = cambio % 500;

        printf("$200: %d\n", cambio / 200);
        cambio = cambio % 200;

        printf("$100: %d\n", cambio / 100);
        cambio = cambio % 100;

        printf("$50: %d\n", cambio / 50);
        cambio = cambio % 50;

        printf("$20: %d\n", cambio / 20);
        cambio = cambio % 20;

        printf("$10: %d\n", cambio / 10);
        cambio = cambio % 10;

        printf("$5: %d\n", cambio / 5);
        cambio = cambio % 5;

        printf("$2: %d\n", cambio / 2);
        cambio = cambio % 2;

        printf("$1: %d\n", cambio / 1);
    }

    return 0;
}
