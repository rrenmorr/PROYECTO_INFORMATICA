// CLASIFICACION DE TRIANGULOS

// Leer los tres lados de un triángulo. Verificar que puedan formarlo y, en ese caso, clasificarlo por sus lados (equilátero, isósceles, escaleno) y por sus ángulos (acutángulo, rectángulo, obtusángulo).

#include <stdio.h>

int main () {
    float ladoUNO;
    float ladoDOS;
    float ladoTRES;

    //PEDIR DATOS
    printf("Ingresar el primer lado: ");
    scanf("%f", &ladoUNO);

    printf("Ingresar el segundo lado: ");
    scanf("%f", &ladoDOS);

    printf("Ingresar el tercer lado: ");
    scanf("%f", &ladoTRES);

    //OPERACIONES
    if (ladoUNO + ladoDOS > ladoTRES && ladoUNO + ladoTRES > ladoDOS && ladoDOS + ladoTRES > ladoUNO) {

        //CLASIFICAR POR SUS LADOS
        if (ladoUNO == ladoDOS && ladoDOS == ladoTRES) {
            printf("Triangulo equilatero\n");
        }
        else if (ladoUNO == ladoDOS || ladoUNO == ladoTRES || ladoDOS == ladoTRES) {
            printf("Triangulo isosceles\n");
        }
        else {
            printf("Triangulo escaleno\n");
        }

        //CLASIFICAR POR SUS ANGULOS
        if (ladoUNO * ladoUNO + ladoDOS * ladoDOS == ladoTRES * ladoTRES ||
            ladoUNO * ladoUNO + ladoTRES * ladoTRES == ladoDOS * ladoDOS ||
            ladoDOS * ladoDOS + ladoTRES * ladoTRES == ladoUNO * ladoUNO) {
            printf("Triangulo rectangulo");
        }
        else if (ladoUNO * ladoUNO + ladoDOS * ladoDOS > ladoTRES * ladoTRES &&
                 ladoUNO * ladoUNO + ladoTRES * ladoTRES > ladoDOS * ladoDOS &&
                 ladoDOS * ladoDOS + ladoTRES * ladoTRES > ladoUNO * ladoUNO) {
            printf("Triangulo acutangulo");
        }
        else {
            printf("Triangulo obtusangulo");
        }
    }
    else {
        printf("Los lados no forman un triangulo");
    }
}
