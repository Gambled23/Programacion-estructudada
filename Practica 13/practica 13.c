#include <stdio.h>
#include <stdlib.h>

//Practica 13 Numeros en orden ascendente
int main()
{
    //Entrada de datos
    int num1, num2, num3;
    printf("Dime tres numeros: \n");
    scanf("%d%d%d", &num1, &num2, &num3);

    //Estructuras de control
    //num1
    if ((num1 <= num2) && (num2 <= num3))
    {
        printf("Los numeros de menor a mayor son: \n %d \n %d  \n %d \n", num1, num2, num3);
    }
    else if ((num1 <= num3) && (num3 <= num2))
    {
        printf("Los numeros de menor a mayor son: \n %d \n %d  \n %d \n", num1, num3, num2);
    }
    //num2
    else if ((num2 <= num1) && (num1 <= num3))
    {
        printf("Los numeros de menor a mayor son: \n %d \n %d  \n %d \n", num2, num1, num3);
    }
    else if ((num2 <= num3) && (num3 <= num1))
    {
        printf("Los numeros de menor a mayor son: \n %d \n %d  \n %d \n", num2, num3, num1);
    }
    //num 3
    else if ((num3 <= num1) && (num1 <= num2))
    {
        printf("Los numeros de menor a mayor son: \n %d \n %d  \n %d \n", num3, num1, num2);
    }
    else
    {
        printf("Los numeros de menor a mayor son: \n %d \n %d  \n %d \n", num3, num2, num1);
    }
    system("PAUSE");
    return 0;
}