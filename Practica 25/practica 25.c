#include <stdio.h>
#include <stdlib.h>

//Practica 25 n!
int main()
{
    int num, res, resO;
    printf("De que numero quieres sacar factorial?\n");
    scanf("%d", &res);
    num=res - 1;
    resO=res;
    do
    {
        res = res * num;
        num--;
    } while (num > 0);
    printf("%d! es %d\n", resO, res);
    system("PAUSE");
    return 0;
}