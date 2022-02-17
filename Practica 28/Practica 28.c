#include <stdio.h>
#include <stdlib.h>

//Practica 28
int main()
{
    int numC, num, cal = 0, calT, promedio;
    printf("Cuantas calificaciones vas a ingresar? \n");
    scanf("%d", &numC);
    printf("Ingresa las %d calificaciones \n", numC);
    for (num = 1; num <= numC; num++)
    {
        scanf("%d", &calT);
        cal = cal + calT;
    }
    promedio = cal / numC;
    printf("%d es el promedio de las calificaciones que ingresaste \n", promedio);
    system("PAUSE");
    return 0;
}