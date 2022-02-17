#include <stdio.h>
#include <stdlib.h>
#define pi 3.1416

//Practica 16 Menu de areas
int main()
{
    //Entrada de datos
    int opc, base, altura, lado;
    double baseMayor, baseMenor, radio, area;
    printf("Que area deseas saber? \n 1.Cuadrado \n 2.Rectangulo \n 3.Circulo \n 4.Trapecio \n");
    scanf("%d", &opc);
    //Operaciones
    switch (opc)
    {
    case 1: //Cuadrado
        printf("Dame el valor del lado del cuadrado: ");
        scanf("%d", &lado);
        area = (lado * lado);
        printf("El area del cuadrado con lado %d es: %.0f \n", lado, area);
        break;
    case 2: //Rectangulo
        printf("Dame el valor de la base: ");
        scanf("%d", &base);
        printf("Dame el valor de la altura: ");
        scanf("%d", &altura);
        area = (base * altura);
        printf("El area del rectangulo con base %d y altura %d es: %.0f \n", base, altura, area);
        break;
    case 3: //Circulo
        printf("Dame el valor del radio: ");
        scanf("%lf", &radio);
        area = pi * (radio * radio);
        printf("El area del circulo con radio %.lf es: %.2lf \n", radio, area);
        break;
    case 4: //Trapecio
        printf("Dame el valor de la base mayor: ");
        scanf("%lf", &baseMayor);
        printf("Dame el valor de la base menor: ");
        scanf("%lf", &baseMenor);
        printf("Dame el valor de la altura: ");
        scanf("%d", &altura);
        area = ((baseMayor + baseMenor) / 2) * altura;
        printf("El area del trapecio con base mayor de %.2lf, base menor de %.2lf, y altura de %d es: %.2lf \n", baseMayor, baseMenor, altura, area);
        break;
    default:
        printf("No existe tal operacion \n");
    }
    system("PAUSE");
    return 0;
}