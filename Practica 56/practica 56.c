#include <stdio.h>
#include <stdlib.h>

//Practica 56 Prototipos
//Prototipos
int suma(int a, int b);
int resta(int a, int b);
//Funciones
int main()
{
    int n1, n2, r, op;
    printf("1)Suma 2)Resta\n");
    scanf("%d", &op);
    printf("Dame 2 valores\n");
    scanf("%d%d", &n1, &n2);
    if (op == 1)
    {
        r = suma(n1, n2);
        printf("El resultado de la suma es %d\n", r);
    }
    else if (op == 2)
    {
        printf("El resultado de la resta es %d\n", resta(n1, n2));
    }
    system("PAUSE");
    return 0;
}
int suma(int a, int b)
{
    int c;
    c = a + b;
    return (c);
}
int resta(int a, int b)
{
    return (a - b);
}
