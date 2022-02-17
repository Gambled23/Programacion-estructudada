#include <stdio.h>
#include <stdlib.h>

//Practica 30 suma pares | producto impares
int main()
{
    int x, y, z, par = 0, impar = 1;
    printf("Cuantos numeros vas a ingresar? \n");
    scanf("%d", &x);
    printf("Ingresa los %d numeros \n", x);
    for (size_t i = 0; i < x; i++)
    {
        scanf("%d", &y);
        z = y%2;
        if (z) //impar
        { 
            impar = impar * y;
        }else  //par
        {
            par = par + y;
        }
    }
    printf("La suma de los numeros pares es %d \n", par);
    printf("El producto de los numeros impares es %d \n", impar);
    system("PAUSE");
    return 0;
}