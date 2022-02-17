#include <stdio.h>
#include <stdlib.h>

//Practica 21 Serie 1 al limite
int main()
{
    int num = 1, lim;
    printf("Hasta que numero deseas visualizar tu serie? \n");
    scanf("%d", &lim);
while (num <= lim)
{
    printf("%d \n", num);
    num++;
}
    system("PAUSE");
    return 0;
}