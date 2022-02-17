#include <stdio.h>
#include <stdlib.h>

//Practica 40 Suma arreglos bidimensionales
int main()
{
    int A1[3][3], B1[3][3], C1[3][3], i, j;
    //Llenar arreglos
    for (size_t i = 0; i <= 2; i++)
    {
        for (size_t j = 0; j <= 2; j++)
        {
            printf("Dame el elemento %d, %d del arreglo A1 \n", i, j);
            scanf("%d", &A1[i][j]);
            printf("Dame el elemento %d, %d del arreglo B1 \n", i, j);
            scanf("%d", &B1[i][j]);
        }
    }
    //Suma e impresion de arreglos
    for (size_t i = 0; i <= 2; i++)
    {
        for (size_t j = 0; j <= 2; j++)
        {
            C1[i][j] = A1[i][j] + B1[i][j];
            printf("%d + %d = %d \n", A1[i][j], B1[i][j], C1[i][j]);
        }
    }
    system("PAUSE");
    return 0;
}