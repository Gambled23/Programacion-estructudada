#include <stdio.h>
#include <stdlib.h>

//Practica 31 Tablas de multiplicar for
int main()
{
    for (size_t i = 1; i <= 10; i++)
    {
        printf("Tabla de multiplicar del %d \n", i);
        for (size_t j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d \n", i, j, i * j);
        }
    }
    system("PAUSE");
    return 0;
}