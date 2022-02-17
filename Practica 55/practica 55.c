#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Practica 55 Menu operaciones
float raiz(float n1)
{
    float res;
    res = sqrt(n1);
    return (res);
}
float potencia(float n1, int exponente)
{
    float res;
    res = pow(n1, exponente);
    return (res);
}
float coseno(float n1)
{
    float res;
    res = cos(n1);
    return (res);
}
float logaritmo(float n1)
{
    float res;
    res = log(n1);
    return (res);
}
int main()
{
    float n1, res;
    int opc, exponente;
    printf("1) Raiz cuadrada\n2) Potencia de un numero\n3) Coseno de un numero\n4) Logaritmo natural\n");
    scanf("%d", &opc);
    switch (opc)
    {
    case 1:
        printf("De que numero quieres sacar raiz?\n");
        scanf("%f", &n1);
        res = raiz(n1);
        break;
    case 2:
        printf("De que numero quieres sacar potencia?\n");
        scanf("%f", &n1);
        printf("A que potencia lo quieres elevar?\n");
        scanf("%d", &exponente);
        res = potencia(n1, exponente);
        break;
    case 3:
        printf("De que numero quieres sacar coseno?\n");
        scanf("%f", &n1);
        res = coseno(n1);
        break;
    case 4:
        printf("De que numero quieres sacar logaritmo?\n");
        scanf("%f", &n1);
        res = logaritmo(n1);
        break;
    default:
        printf("La opcion que has introducido es incorrecta\n");
        break;
    }
    printf("El resultado es %.2f\n", res);
    system("PAUSE");
    return 0;
}