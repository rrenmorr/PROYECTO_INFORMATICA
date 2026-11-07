// ECUACION DE SEGUNDO GRADO

// Resolver una ecuación de segundo grado con la fórmula general. Considerar los tres casos del discriminante (dos raíces reales, una raíz doble o raíces complejas, mostrando parte real e imaginaria) y el caso a = 0, donde la ecuación pasa a ser de primer grado.

#include <stdio.h>

int main () {
    float a;
    float b;
    float c;
    float discriminante;

    //PEDIR DATOS
    printf("Ingresar el valor de a: ");
    scanf("%f", &a);

    printf("Ingresar el valor de b: ");
    scanf("%f", &b);

    printf("Ingresar el valor de c: ");
    scanf("%f", &c);

    //OPERACIONES
    if (a == 0) {

        if (b != 0) {
            printf("Es una ecuacion de primer grado\n");
            printf("La solucion se obtiene con -c / b");
        }
        else if (c == 0) {
            printf("Tiene infinitas soluciones");
        }
        else {
            printf("No tiene solucion");
        }

    }
    else {

        discriminante = b * b - 4 * a * c;

        if (discriminante > 0) {
            printf("Tiene dos raices reales diferentes");
        }
        else if (discriminante == 0) {
            printf("Tiene una raiz real doble");
        }
        else {
            printf("Tiene dos raices complejas");
        }

        printf("\nDiscriminante = %.2f", discriminante);
    }
}

// NO SE SI LO HICE BIEN, NO TENGO IDEA DE COMO SACAR ESTO
