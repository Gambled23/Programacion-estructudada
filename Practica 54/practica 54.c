#include <stdio.h>
#include <stdlib.h>

//Practica 54 Factorial
int factorial(int num)
{
    int res = 1;
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
    int num;
    printf("De que numero quieres sacar factorial?\n");
    scanf("%d", &num);
    printf("El factorial de %d es %d\n", num, factorial(num));
    system("PAUSE");
    return 0;
}