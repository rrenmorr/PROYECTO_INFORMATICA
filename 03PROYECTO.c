//LONGITUD: Leer una longitud en centímetros y mostrarla en pies y pulgadas.

#include <stdio.h>

main () {
//PEDIR DISTANCIA_LONGITUD
printf ("Ingresar longitud/distancia en cm:");
float cm;
scanf ("%f", &cm);

//CONVERSIONES
float IN;
float FT;

IN= cm*0.3937;
FT= cm*0.0328;

//RESULTADOS DE LAS CONVERSIONES
printf("\nLa longitud en pulgadas [IN] es: %.3f", IN);
printf ("\nLa longitud en pies [FT] es: %.3f", FT);

}
