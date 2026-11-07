// 5 CALIFICACIONES

//Leer cinco calificaciones. Mostrar el promedio, la calificación más alta y la más baja, e indicar si el alumno está aprobado o reprobado (mínimo 6).

#include <stdio.h>

int main () {
    float calificacionUNO;
    float calificacionDOS;
    float calificacionTRES;
    float calificacionCUATRO;
    float calificacionCINCO;
    float promedio;
    float mayor;
    float menor;

    //PEDIR DATOS
    printf("Ingresar la primera calificacion: ");
    scanf("%f", &calificacionUNO);

    printf("Ingresar la segunda calificacion: ");
    scanf("%f", &calificacionDOS);

    printf("Ingresar la tercera calificacion: ");
    scanf("%f", &calificacionTRES);

    printf("Ingresar la cuarta calificacion: ");
    scanf("%f", &calificacionCUATRO);

    printf("Ingresar la quinta calificacion: ");
    scanf("%f", &calificacionCINCO);

    //OPERACIONES
    promedio = (calificacionUNO + calificacionDOS + calificacionTRES + calificacionCUATRO + calificacionCINCO) / 5;

    mayor = calificacionUNO;
    menor = calificacionUNO;

    if (calificacionDOS > mayor) {
        mayor = calificacionDOS;
    }
    if (calificacionTRES > mayor) {
        mayor = calificacionTRES;
    }
    if (calificacionCUATRO > mayor) {
        mayor = calificacionCUATRO;
    }
    if (calificacionCINCO > mayor) {
        mayor = calificacionCINCO;
    }

    if (calificacionDOS < menor) {
        menor = calificacionDOS;
    }
    if (calificacionTRES < menor) {
        menor = calificacionTRES;
    }
    if (calificacionCUATRO < menor) {
        menor = calificacionCUATRO;
    }
    if (calificacionCINCO < menor) {
        menor = calificacionCINCO;
    }

    //MOSTRAR DATOS
    printf("Promedio = %.2f\n", promedio);
    printf("Calificacion mas alta = %.2f\n", mayor);
    printf("Calificacion mas baja = %.2f\n", menor);

    if (promedio >= 6) {
        printf("Alumno aprobado");
    }
    else {
        printf("Alumno reprobado");
    }
}
