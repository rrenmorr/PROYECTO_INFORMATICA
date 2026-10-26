//TEMPERATURA: Leer una temperatura en grados Celsius y mostrarla en Fahrenheit y en Kelvin.

#include <stdio.h>

main () {
//PEDIR TEMPERATURA en celsius
printf("INGRESAR TEMPERATURA [C]:");
float Tcelsius;
scanf("%f", &Tcelsius);

//CONVERSIONES
float Tfahrenheit;
float Tkelvin;

Tfahrenheit= (Tcelsius*1.8)+32;
Tkelvin= (Tcelsius-273.15);

//RESULTADOS DE LAS CONVERSIONES
printf("\nLa temperatura en Fahrenheit [F]: %.2f", Tfahrenheit);
printf("\nLa temperatura en Kelvin [K]: %.2f", Tkelvin);

}
