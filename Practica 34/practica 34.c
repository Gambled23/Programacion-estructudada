#include <stdio.h>
#include <stdlib.h>

//Practica 34 Arreglos unidimensionales
int main()
{
    int x = -1;
    int datos [10];
    //Array
    for (size_t i = 0; i <= 9; i++)
    {
        printf ("Dame el elemento %d \n", i);
        scanf("%d", &datos[i]);
    }
    //Print array
    for (size_t i = 9; i >= 0; i--)
        printf("El elemento %d es %d \n", i, datos[i]);
    system("PAUSE");
    return 0;
}