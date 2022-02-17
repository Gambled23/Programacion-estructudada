#include <stdio.h>
#include <stdlib.h>

//Practica 4 Area de un cuadrado
int main()
{
    //Entrada de datos
    int lado, area;
    printf("Dame el valor del lado del cuadrado: ");
    scanf("%d", &lado);

    //Calculos para el area
    area = (lado * lado);
    printf("El area del cuadrado con lado %d es: %d \n",lado, area);
    system("PAUSE");
    return 0;
}