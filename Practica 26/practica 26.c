#include <stdio.h>
#include <stdlib.h>

//Practica 26 tabla del 7
int main()
{
    int cont=1, res;
    do
    {
        res = 7 * cont;
        printf("7 * %d = %d\n", cont, res);
        cont++;
    } while (cont <= 10);
    system("PAUSE");
    return 0;
}