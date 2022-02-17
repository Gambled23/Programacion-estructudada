#include <stdio.h>
#include <stdlib.h>

//Practica 36 Promedio arreglos
int main()
{
    int A[10];
    float promedio = 0;
    for (size_t i = 0; i <= 9; i++)
    {
        printf("Ingresa el elemento %d \n", i+1);
        scanf("%d", &A[i]);
    }
    for (size_t i = 0; i <= 9; i++)
    {
        promedio = promedio + A[i];
    }
    promedio = promedio / 10;
    printf ("El promedio de los elementos es %.2f \n", promedio);
    system("PAUSE");
    return 0;
}