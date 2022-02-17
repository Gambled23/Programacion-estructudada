#include <stdio.h>
#include <stdlib.h>


//Practica 7 area de un trapecio
int main()
{
    //Entrada de datos
    double baseMayor, baseMenor, altura, area;
    printf("Dame el valor de la base mayor: ");
    scanf("%lf", &baseMayor);
    printf("Dame el valor de la base menor: ");
    scanf("%lf", &baseMenor);
    printf("Dame el valor de la altura: ");
    scanf("%lf", &altura);

    //Calculos para el area con el radio
    area =  ((baseMayor + baseMenor)/2) * altura;
    printf("El area del trapecio con base mayor de %.2lf, base menor de %.2lf, y altura de %.2lf es: %.2lf \n",baseMayor, baseMenor, altura, area);
    system("PAUSE");
    return 0;
}