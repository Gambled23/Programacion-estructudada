#include <stdio.h>
#include <stdlib.h>

//Practica 38 Multiplicacion de dos arreglos unidimensionales
int main()
{
    int A[10] = {}, B[10] = {}, C[10];
    for (size_t i = 0; i <= 9; i++)
    {
        printf("Ingresa el elemento %d del grupo A \n", i + 1);
        scanf("%d", &A[i]);
    }
    for (size_t i = 0; i <= 9; i++)
    {
        printf("Ingresa el elemento %d del grupo B \n", i + 1);
        scanf("%d", &B[i]);
    }
    for (size_t i = 0; i <= 9; i++)
    {
        C[i] = A[i] * B[i];
        printf("%d * %d = %d \n", A[i], B[i], C[i]);
    }
    system("PAUSE");
    return 0;
}