#include <stdio.h>
#include <stdlib.h>

int num, res = 1;
//Practica 51 Factorial
int factorial()
{
    printf("De que numero quieres sacar factorial?\n");
    scanf("%d", &num);
    int temp = num;
    for (size_t i = 0; i < num; i++)
    {
        res = res * temp;
        temp--;
    }
    return (res);
}
int main()
{
    factorial();
    printf("El factorial de %d es %d\n", num, res);
    system("PAUSE");
    return 0;
}