// CILINDRO

//Leer el radio y la altura de un cilindro. Calcular y mostrar su área total, su volumen y  su capacidad en litros (las medidas están en cm).

#include <stdio.h>

int main() {
    float radio;
    float altura;
    float area;
    float volumen;
    float litros;

    //PEDIR DATOS:
    printf("Dame el radio: ");
    scanf("%f", &radio);

    printf("Dame la altura: ");
    scanf("%f", &altura);

    //OPERACIONES
    area = 2 * 3.1416 * radio * (radio + altura);
    volumen = 3.1416 * radio * radio * altura;
    litros = volumen / 1000;

    //DATOS
    printf("Area total = %.2f cm2\n", area);
    printf("Volumen = %.2f cm3\n", volumen);
    printf("Capacidad = %.2f litros\n", litros);
}
