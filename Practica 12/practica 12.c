#include <stdio.h>
#include <stdlib.h>

//Practica 12 Imprimir el numero mayor
int main()
{
    //Entrada de datos
    int num1, num2, num3;
    printf("Dime tres numeros: \n");
    scanf("%d%d%d", &num1, &num2, &num3);

    //Estructuras de control
    if ((num1 > num2) && (num1 > num3))
    {
        printf("El numero mayor es: %d \n", num1);
    }
    else if ((num2 > num1) && (num2 > num3))
    {
        printf("El numero mayor es: %d \n", num2);
    }
    else if ((num3 > num1) && (num3 > num2))
    {
        printf("El numero mayor es: %d \n", num3);
    }
    else
    {
        printf("Todos los numeros son iguales \n");
    }
    system("PAUSE");
    return 0;
}