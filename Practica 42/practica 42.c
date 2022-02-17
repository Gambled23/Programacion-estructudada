#include <stdio.h>
#include <stdlib.h>

//Practica 42 Suma columnas
int main()
{
    //Llenar matriz
    float matriz[3][3], matrizUni[3] = {0, 0, 0};
    for (size_t i = 0; i <= 2; i++)
    {
        for (size_t j = 0; j <= 2; j++)
        {
            printf("Dime %d, %d de la matriz \n", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
    //Sumar columnas
    for (size_t i = 0; i <= 2; i++)
    {
        for (size_t j = 0; j <= 2; j++)
        {
            matrizUni[i] = matrizUni[i] + matriz[j][i];
        }
        printf("La suma de la columna %d es %.2f \n", i, matrizUni[i]);
    }
    system("PAUSE");
    return 0;
}