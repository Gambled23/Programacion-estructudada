#include <stdio.h>
#include <stdlib.h>

//Practica 11 Numeros pares e impares
int main()
{
    //Entrada de datos
    int numero, resultado;
    printf("Escribe un numero entero: ");
    scanf("%d", &numero);

    //Calculos para el numero
    resultado = (numero%2);
    if (resultado == 0)
    {
        printf("Tu numero es par \n");
    }
    else 
    {
        printf("Tu numero es impar \n");
    }
    system("PAUSE");
    return 0;
}