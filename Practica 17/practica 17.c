#include <stdio.h>
#include <stdlib.h>
#define dolar 19.94
#define euro 23.58

//Practica 17 Conversión de divisas
int main()
{
    //Entrada de datos
    int opc;
    float uPesos, uDolares, uEuros;
    printf("Que deseas convertir? \n 1.Pesos-Dolar \n 2.Pesos-Euros \n 3.Dolar-Pesos \n 4.Euros-Pesos \n");
    scanf("%d", &opc);
    //Operaciones
    switch (opc)
    {
    case 1:
        printf("Cuantos pesos quieres convertir a dolares? \n");
        scanf("%f", &uPesos);
        uDolares = uPesos / dolar;
        printf("tus $%.2f pesos son $%.2f dolares \n", uPesos, uDolares);
        break;
    case 2:
        printf("Cuantos pesos quieres convertir a euros? \n");
        scanf("%f", &uPesos);
        uEuros = uPesos / euro;
        printf("tus $%.2f pesos son $%.2f euros \n", uPesos, uEuros);
        break;
    case 3:
        printf("Cuantos dolares quieres convertir a pesos? \n");
        scanf("%f", &uDolares);
        uPesos = uDolares * dolar;
        printf("tus $%.2f dolares son $%.2f pesos \n", uDolares, uPesos);
        break;
    case 4:
        printf("Cuantos euros quieres convertir a pesos? \n");
        scanf("%f", &uEuros);
        uPesos = uEuros * euro;
        printf("tus $%.2f euros son $%.2f pesos \n", uEuros, uPesos);
        break;
    default:
        printf("No existe tal conversion \n");
    }
    system("PAUSE");
    return 0;
}