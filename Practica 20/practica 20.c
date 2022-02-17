#include <stdio.h>
#include <stdlib.h>

//Practica 20 Suma y resta con selectiva doble anidada
int main()
{
    //Entrada de datos
    int opc, a, b, res;
    printf("Elige 1.Suma 2.Resta \n");
    scanf("%d", &opc);
    //Estructuras de control
    if (opc == 1)
    {
        printf("Dame dos valores \n");
        scanf("%d%d", &a, &b);
        res = a + b;
        printf("El resultado de la suma es %d\n", res);
    }
    else if (opc == 2)
    {
        printf("Dame dos valores \n");
        scanf("%d%d", &a, &b);
        res = a - b;
        printf("El resultado de la resta es %d\n", res);
    }
    else
    {
        printf("No existe tal operacion \n");
    }
    system("PAUSE");
    return 0;
}