#include <stdio.h>
#include <stdlib.h>

//Practica 31 Tablas de multiplicar while
int main()
{
    int i = 1, j = 1;
    while (i<= 10)
    {
        printf("Tabla de multiplicar del %d \n", i);
        while (j <= 10)
        {
            printf("%d x %d = %d \n", i, j, i * j);
            j++;
        }
        j=1;
        i++;
    }
    system("PAUSE");
    return 0;
}