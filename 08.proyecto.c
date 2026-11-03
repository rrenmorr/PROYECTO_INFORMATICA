//TERRENO

//Calcular el costo total de un terreno rectangular a partir de su largo, su ancho y el precio por m². Mostrar el subtotal, el IVA (16%) y el total.

#include <stdio.h>

int main () {
    float largo;
    float ancho;
    float precio;
    float subtotal;
    float iva;
    float total;

    //PEDIR DATOS
    printf("Dame el largo del terreno: ");
    scanf("%f", &largo);

    printf("Dame el ancho del terreno: ");
    scanf("%f", &ancho);

    printf("Dame el precio por m2: ");
    scanf("%f", &precio);

    //OPERACIONES
    subtotal = largo * ancho * precio;
    iva = subtotal * 0.16;
    total = subtotal + iva;

    //MOSTRAR DATOS
    printf("Subtotal = %.2f\n", subtotal);
    printf("IVA = %.2f\n", iva);
    printf("Total = %.2f\n", total);
}
