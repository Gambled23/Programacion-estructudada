#include <stdlib.h>
#include <stdio.h>
#define TAM 100

//Practica 60 arreglo unidimensional
//prototipo de funciones
int ordenar (int n, int x[]);

//Funciones
int main ()
{
    //Entrada de datos
    int i, n, x[TAM];
    printf("Cuantos numeros seran introducidos? \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("i= %d x= ", i+1);
        scanf("%d", &x[i]);
    }
    //Llamada a la funcion ordenar
    ordenar(n,x);
    //Salida de datos
    printf("\nLista de numeros ordenada: \n");
    for (i = 0; i < n; i++)
    {
        printf("i= %d x= %d \n", i+1, x[i]);
    }
    system ("PAUSE");
    return 0;
}

int ordenar (int n, int x[])
{
    int i, elem, temp;
    //Ordenamiento
    for (elem = 0; elem < n-1; elem++)
    {
        for (i = elem + 1; i < n; i++)
        {
            if (x[i]<x[elem])
            {
                temp = x[elem];
                x[elem] = x[i];
                x[i] = temp;
            }
        }
    }
    return 0;
}
