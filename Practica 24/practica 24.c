#include <stdio.h>
#include <stdlib.h>
#define lim 10

//Practica 24 serie del 1-10 dowhile
int main()
{
    int num = 1;
    do
    {
        printf("%d\n", num);
        num++;
    } while (num <= lim);
    system("PAUSE");
    return 0;
}