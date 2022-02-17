#include <stdio.h>
#include <stdlib.h>

//Practica 2 Suma de 2 enteros
int main()
{
    int n1, n2, res;
    printf("Dame 2 enteros \n");
    scanf("%d%d",&n1, &n2);
    res = n1 + n2;
    printf("El resultado de %d + %d es %d\n", n1, n2, res);
    system("PAUSE");
    return 0;
}