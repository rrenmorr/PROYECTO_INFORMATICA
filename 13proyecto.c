//COSTO DE UN TERRENO

//Calcular el costo de un terreno cuyo precio es de $900 por m², con descuento del 10% si el área pasa de 500 m² y del 15% si pasa de 1000 m².

#include <stdio.h>

main () {

//PEDIR DATOS
float largo;
float ancho;

printf ("Ingresar largo del terreno:");
scanf ("%f", &largo);

printf ("Ingresar ancho del terreno:");
scanf ("%f", &ancho);

//OPERACIONES

float area;
float subtotal;
float descuento;
float total;

area= largo*ancho;
subtotal= area*900;

//COMPARACION
if (area > 1000) {
descuento = subtotal*0.15;
}

else if (area > 500){
descuento= subtotal*0.10;
}

else {
descuento: 0;
}

//TOTAL

total= subtotal - descuento;

//MOSTRAR DATOS

printf ("\nEl area del terreno es: %2.f m2", area);
printf ("\nEl subtotal es: %2.f", subtotal);
printf ("\nEl descuento es: %2.f", descuento);
printf ("\nEl costo total es: %2.f", total);

return 0;
}
