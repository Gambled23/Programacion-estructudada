#include <stdio.h>
#include <stdlib.h>

//Practica 10 Reconocer numeros positivos y negativos
int main()
{
    //Entrada de datos
    int numero;
    printf("Escribe un numero entero positivo o negativo: ");
    scanf("%d", &numero);

    //Estructuras de control
    if (numero < 0)
    {
        printf("Tu numero es negativo \n");
    }
    else if (numero > 0)
    {
        printf("Tu numero es positivo \n");
    }
    else
    {
        printf("Tu numero es cero \n");
    }
    system("PAUSE");
    return 0;
}