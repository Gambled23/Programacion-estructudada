#include <stdio.h>
#include <stdlib.h>

//Practica 39 Arreglos por columnas
int main()
{
    int matriz[4][4], i, j;
    //Llena arreglos
    for (size_t j = 0; j <= 3; j++)
    {
        for (size_t i = 0; i <= 3; i++)
        {
            printf("Dame el elemento %d, %d del arreglo bidimensional \n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    //Muestra arreglo por filas
    for (size_t i = 0; i <= 3; i++)
    {
        for (size_t j = 0; j <= 3; j++)
        {
            printf("el elemento %d, %d es %d \n", i, j, matriz[i][j]);
        }
    }
    system("PAUSE");
    return 0;
}