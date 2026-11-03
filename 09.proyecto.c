//CALIFICACIONES

//Leer cuatro calificaciones parciales y calcular la calificación final ponderada (20%, 20%, 25% y 35%).

#include <stdio.h>

int main () {
    float calificacionUNO;
    float calificacionDOS;
    float calificacionTRES;
    float calificacionCUATRO;
    float final;

    //PEDIR DATOS
    printf("Dame la primera calificacion: ");
    scanf("%f", &calificacionUNO);

    printf("Dame la segunda calificacion: ");
    scanf("%f", &calificacionDOS);

    printf("Dame la tercera calificacion: ");
    scanf("%f", &calificacionTRES);

    printf("Dame la cuarta calificacion: ");
    scanf("%f", &calificacionCUATRO);

    //OPERACIONES
    final = calificacionUNO * 0.20 + calificacionDOS * 0.20 + calificacionTRES * 0.25 + calificacionCUATRO * 0.35;

    //MOSTRAR DATOS
    printf("Calificacion final = %.2f\n", final);
}
