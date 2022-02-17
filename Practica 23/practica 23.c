#include <stdio.h>
#include <stdlib.h>

//Practica 23 Potencias
int main()
{
    //Entrada de datos
    int base, pot, res, contador = 1;
    printf("Cual numero quieres elevar? \n");
    scanf("%d", &base);
    res = base;
    printf("A que numero lo quieres elevar? \n");
    scanf("%d", &pot);
    //sacar potencia
    while (contador < pot)
    {
        contador++;
        res = res * base;
    }
    printf("%d elevado a la %d es %d \n", base, pot, res); //imprimir resultado
    system("PAUSE");
    return 0;
}