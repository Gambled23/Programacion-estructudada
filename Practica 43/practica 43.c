#include <stdio.h>
#include <stdlib.h>

//Practica 43 Diagonales
int main()
{
    float mx[4][4], y = 1;
    int i, j;
    //Llenar matriz
    for (size_t i = 0; i <= 3; i++)
    {
        for (size_t j = 0; j <= 3; j++)
        {
            printf("Dime %d, %d de la matriz \n", i, j);
            scanf("%f", &mx[i][j]);
        }
    }
    i = 0, j=0;
    do
    {
        printf("%d, %d es %.2f \n", i, j, mx[i][j]);
        i++;
        j++;
    } while (j <= 3);
    i = 0;
    j = 0;
    do
    {
        y = y * mx[i][j];
        i++;
        j++;
    } while (j <= 3);
    printf("El producto de la diagonal es %.2f", y);
    system("PAUSE");
    return 0;
}