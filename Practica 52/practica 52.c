#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Practica 52 Menu operaciones
float res, n1;
float raiz()
{
    printf("De que numero quieres sacar raiz?\n");
    scanf("%f", &n1);
    res = sqrt(n1);
    return (res);
}
float potencia()
{
    int exponente;
    printf("De que numero quieres sacar potencia?\n");
    scanf("%f", &n1);
    printf("A que potencia lo quieres elevar?\n");
    scanf("%d", &exponente);
    res = pow(n1, exponente);
    return (res);
}
float coseno()
{
    printf("De que numero quieres sacar coseno?\n");
    scanf("%f", &n1);
    res = cos(n1);
    return (res);
}
float logaritmo()
{
    printf("De que numero quieres sacar logaritmo?\n");
    scanf("%f", &n1);
    res = log(n1);
    return (res);
}
int main()
{
    int opc;
    printf("1) Raiz cuadrada\n2) Potencia de un numero\n3)Coseno de un numero\n4) Logaritmo natural\n");
    scanf("%d", &opc);
    switch (opc)
    {
    case 1:
        raiz();
        break;
    case 2:
        potencia();
        break;
    case 3:
        coseno();
        break;
    case 4:
        logaritmo();
        break;
    default:
        printf("La opcion que has introducido es incorrecta\n");
        break;
    }
    printf("El resultado es %.2f\n", res);
    system("PAUSE");
    return 0;
}