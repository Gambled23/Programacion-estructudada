#include <stdlib.h>
#include <stdio.h>

//Practica 61 precio productos
//Prototipos
float descuentos (float Precios[]);
//Funciones
int main()
{
    //Entrada de datos
    float Precios[10];
    for (size_t i = 0; i < 10; i++)
    {
        printf("Dime el precio del producto %d: $", i+1);
        scanf("%f", &Precios[i]);
    }
    //Llamada a la funcion
    descuentos(Precios);
    //Salida de datos
    for (size_t i = 0; i < 10; i++)
    {
        printf("El precio del producto %d con el 30 porciento de descuento es: $%.2f\n", i+1, Precios[i]);
    }
    system("PAUSE");
    return 0;
}

float descuentos (float Precios[])
{
    for (size_t i = 0; i < 10; i++)
    {
        Precios[i] = Precios[i] * 0.7;
    }
    return 0;
}
