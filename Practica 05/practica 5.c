#include <stdio.h>
#include <stdlib.h>

//Practica 5 Area de rectangulo
int main()
{
    //Entrada de datos de base y altura
    int base, altura, area;
    printf("Dame el valor de la base: ");
    scanf("%d", &base);
    printf("Dame el valor de la altura: ");
    scanf("%d", &altura);

    //Calculos para el area
    area = (base * altura);
    printf("El area del rectangulo con base %d y altura %d es: %d \n", base, altura, area);
    system("PAUSE");
    return 0;
}