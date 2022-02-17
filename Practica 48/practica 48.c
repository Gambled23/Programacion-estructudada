#include <stdio.h>
#include <stdlib.h>

//Practica 48 Funciones sin paso de parametros
int n1, n2;
int suma()
{
    int c;
    printf("Dame 2 valores \n");
    scanf("%d%d", &n1, &n2);
    c = n1 + n2;
    return (c);
}
int resta()
{
    printf("Dame 2 valores \n");
    scanf("%d%d", &n1, &n2);
    return (n1 - n2);
}
int main()
{
    int r, opc;
    printf("1)Suma 2)Resta\n");
    scanf("%d", &opc);
    if (opc == 1)
    {
        r = suma();
        printf("El resultado de la suma es %d\n", r);
    }
    else if (opc == 2)
    {
        printf("El resultado de la resta es %d\n", resta());
    }
    system("PAUSE");
    return 0;
}