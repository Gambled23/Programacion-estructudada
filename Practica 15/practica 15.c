#include <stdio.h>
#include <stdlib.h>

//Practica 15 Calculadora operaciones basicas
int main()
{
    //Entrada de datos
    int num1, num2, opc, res;
    printf("Ingrese los dos numeros que quiere usar \n");
    scanf("%d%d", &num1, &num2);
    printf("Que operacion desea realizar? \n 1.Suma \n 2.Resta \n 3.Multiplicacion \n 4.Division \n");
    scanf("%d", &opc);

    //Operaciones
    switch (opc)
    {
    case 1:
        res = num1 + num2;
        printf("El resultado de la suma es %d\n", res);
        break;
    case 2:
        res = num1 - num2;
        printf("El resultado de la resta es %d\n", res);
        break;
    case 3:
        res = num1 * num2;
        printf("El resultado de la multiplicacion es %d\n", res);
        break;
    case 4:
        res = num1 / num2;
        printf("El resultado de la division es %f\n", res);
        break;
    default:
        printf("No existe tal operacion \n");
    }
    system("PAUSE");
    return 0;
}