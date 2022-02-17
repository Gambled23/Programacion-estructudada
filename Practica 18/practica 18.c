#include <stdio.h>
#include <stdlib.h>

//Practica 18 Conversión unidades
int main()
{
    //Entrada de datos
    int opc;
    float uEntrada, uSalida;
    printf("Que deseas convertir? \n 1.mts-cm \n 2.mts.km \n 3.km-mts \n 4.cm-mts \n");
    scanf("%d", &opc);
    //Operaciones
    switch (opc)
    {
    case 1:
        printf("Cuantos mts quieres convertir a cm? \n");
        scanf("%f", &uEntrada);
        uSalida = uEntrada * 100;
        printf("tus %.2f mts son %.2f cm \n", uEntrada, uSalida);
        break;
    case 2:
        printf("Cuantos mts quieres convertir a km? \n");
        scanf("%f", &uEntrada);
        uSalida = uEntrada / 1000;
        printf("tus %.2f mts son %.2f cm \n", uEntrada, uSalida);
        break;
    case 3:
        printf("Cuantos km quieres convertir a mts? \n");
        scanf("%f", &uEntrada);
        uSalida = uEntrada * 1000;
        printf("tus %.2f km son %.2f mts \n", uEntrada, uSalida);
        break;
    case 4:
        printf("Cuantos cm quieres convertir a mts? \n");
        scanf("%f", &uEntrada);
        uSalida = uEntrada / 100;
        printf("tus %.2f cm son %.2f mts \n", uEntrada, uSalida);
        break;
    default:
        printf("No existe tal conversion \n");
    }
    system("PAUSE");
    return 0;
}