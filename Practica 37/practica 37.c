#include <stdio.h>
#include <stdlib.h>

//Practica 37 Elemento mayor
int main()
{
    int A[15], x=0;
    for (size_t i = 0; i <= 14; i++)
    {
        printf("Ingresa el elemento %d \n", i+1);
        scanf("%d", &A[i]);
    }
    for (size_t i = 0; i <= 14; i++)
    {
        if (A[i] > A[x])
            x=i;
    }
    printf("El numero mayor es %d", A[x]);
    system("PAUSE");
    return 0;
}