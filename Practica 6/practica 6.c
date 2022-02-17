#include <stdio.h>
#include <stdlib.h>
#define pi 3.1416

//Practica 6 Area de un círculo
int main()
{
    //Entrada de datos
    double radio, area;
    printf("Dame el valor del radio: ");
    scanf("%lf", &radio);

    //Calculos para el area con el radio
    area = pi * (radio * radio);
    printf("El area del circulo con radio %.lf es: %.2lf \n",radio, area);
    system("PAUSE");
    return 0;
}