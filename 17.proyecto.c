// DIA DE LA SEMANA

// Leer un número del 1 al 7 y mostrar el día de la semana correspondiente, indicando si es día laboral o fin de semana. Si el número no es válido, mostrar “Error de opción”.

#include <stdio.h>

int main () {
    int numero;

    //PEDIR DATOS
    printf("Ingresa un numero del 1 al 7: ");
    scanf("%d", &numero);

    //OPERACIONES
    switch (numero) {
        case 1:
            printf("Lunes - Dia laboral");
            break;

        case 2:
            printf("Martes - Dia laboral");
            break;

        case 3:
            printf("Miercoles - Dia laboral");
            break;

        case 4:
            printf("Jueves - Dia laboral");
            break;

        case 5:
            printf("Viernes - Dia laboral");
            break;

        case 6:
            printf("Sabado - Fin de semana");
            break;

        case 7:
            printf("Domingo - Fin de semana");
            break;

        default:
            printf("Error de opcion");
    }
}
