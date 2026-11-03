//POSITIVO, NEGATIVO O CERO

//Leer un número entero y decir si es positivo, negativo o cero, y además si es par o impar.

#include <stdio.h>
main () {

int num;
printf ("Ingresar numero:");
scanf ("%d", &num);

//DISTINGUIR

if (num > 0 )
printf ("POSITIVO");

if (num < 0 )
printf ("NEGATIVO");

if (num = 0)
printf ("CERO");

}
