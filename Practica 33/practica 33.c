#include <stdio.h>
#include <stdlib.h>

//Practica 31 Tablas de multiplicar do-while
int main()
{
    int i = 1, j = 1;
    do
    {
        printf("Tabla de multiplicar del %d \n", i);
        do
        {
            printf("%d x %d = %d \n", i, j, i * j);
            j++;
        } while (j <= 10);
        j=1;
        i++;
    } while (i<= 10);
    system("PAUSE");
    return 0;
}