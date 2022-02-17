#include <stdio.h>
#include <stdlib.h>

//Practica 29 Tabla de multiplicar
int main()
{
    int x, count, res;
    printf("Que tabla de multiplicar quieres imprimir? \n");
    scanf("%d", &x);
    for (size_t i = 1; i <= 10; i++)
    {
        res = x * i;
        printf("%d x %d = %d \n", x, i, res);
    }
    
    system("PAUSE");
    return 0;
}