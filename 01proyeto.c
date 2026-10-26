/*Leer tres num. enteros y mostrar:
 su suma, su producto y promedio con dos decimales. */

 #include <stdio.h>

 main () {
 //PEDIR DATOS
 printf ("Ingresa el primer numero:");
 float numeroUNO;
 scanf ("%f", &numeroUNO);

 printf ("Ingresa el segundo numero:");
 float numeroDOS;
 scanf ("%f", &numeroDOS);

 printf ("Ingresa el tercer numero:");
 float numeroTRES;
 scanf ("%f", &numeroTRES);

 //OPERACIONES
 float suma;
 float producto;
 float promedio;

 suma= numeroUNO + numeroDOS + numeroTRES;
 producto= numeroUNO * numeroDOS * numeroTRES;
 promedio= (numeroUNO + numeroDOS + numeroTRES)/3;

 //MOSTRAR DATOS

 printf("\nLa suma de los numeros es: %.2f", suma);
 printf("\nEl producto de los numeros es: %.2f", producto);
 printf("\nEl promedio de los numeros es: %.2f", promedio);
 }
