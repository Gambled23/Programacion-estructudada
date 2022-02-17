#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Practica 19 Calculadora Cientifica
int main()
{
    int opc;
    double pot, num1, res;
    printf("Que operacion le gustaria realizar? \n 1.Potencia \n 2.Raiz Cuadrada \n 3.Seno \n 4.Coseno \n 5.Logaritmo Natural \n");
    scanf("%d", &opc);
    switch (opc)
    {
    case 1: //Potencia
        printf("Ingrese el numero que quiere elevar: ");
        scanf("%lf", &num1);
        printf("A que valor quieres elevar el %.0lf?: ", num1);
        scanf("%lf", &pot);
        res = pow(num1, pot);
        printf("%.0f elevado a la %.0f es: %.2f \n", num1, pot, res);
        break;
    case 2: //Raiz cuadrada
        printf("Ingrese el numero que quiere sacar raiz cuadrada: ");
        scanf("%lf", &num1);
        res = sqrt(num1);
        printf("La raiz cuadrada de %.0f es: %.3f \n", num1, res);
        break;
    case 3: //Seno
        printf("Ingrese el numero que quiere sacar seno: ");
        scanf("%lf", &num1);
        res = sin(num1);
        printf("El seno de %.0f es: %.3f \n", num1, res);
        break;
    case 4: //Coseno
        printf("Ingrese el numero que quiere sacar coseno: ");
        scanf("%lf", &num1);
        res = cos(num1);
        printf("El coseno de %.0f es: %.3f \n", num1, res);
        break;
    case 5: //Logaritmo natural
        printf("Ingrese el numero que quiere sacar logaritmo natural: ");
        scanf("%lf", &num1);
        res = log(num1);
        printf("El logaritmo natural de %.0f es: %.3f \n", num1, res);
        break;
    default: printf("La operacion solicitada no existe \n");
    }
    system("PAUSE");
    return 0;
}