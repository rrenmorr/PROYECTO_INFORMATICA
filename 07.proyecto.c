//HIPOTENUSA

//Leer los dos catetos de un triángulo rectángulo. Calcular la hipotenusa, el perímetro y el área.

#include <stdio.h>
#include <math.h>

int main () {
    float catetoUNO;
    float catetoDOS;
    float hipotenusa;
    float perimetro;
    float area;

    //PEDIR DATOS
    printf("Ingresa el primer cateto: ");
    scanf("%f", &catetoUNO);

    printf("Ingresa el segundo cateto: ");
    scanf("%f", &catetoDOS);

    //OPERACIONES
    hipotenusa = sqrt(catetoUNO * catetoUNO + catetoDOS * catetoDOS);
    perimetro = catetoUNO + catetoDOS + hipotenusa;
    area = (catetoUNO * catetoDOS) / 2;

    //DATOS
    printf("Hipotenusa = %.2f\n", hipotenusa);
    printf("Perimetro = %.2f\n", perimetro);
    printf("Area = %.2f\n", area);
}
