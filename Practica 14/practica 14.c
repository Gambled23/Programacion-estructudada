#include <stdio.h>
#include <stdlib.h>

//Practica 14 Selectiva Multiple
int main()
{
    int opc, a, b, res;
    printf("Elige 1.Suma 2.Resta \n");
    scanf("%d", &opc);
    switch (opc)
    {
    case 1:
        printf("Dame dos valores \n");
        scanf("%d%d", &a, &b);
        res = a + b;
        printf("El resultado de la suma es %d\n", res);
        break;
    case 2:
        printf("Dame dos valores \n");
        scanf("%d%d", &a, &b);
        res = a - b;
        printf("El resultado de la resta es %d\n", res);
        break;
    default:
        printf("No existe tal operacion \n");
    }
    system("PAUSE");
    return 0;
}