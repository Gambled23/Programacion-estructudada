#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define TAM 10
//Practica 45
int main()
{
    char letra[TAM];
    for (size_t i = 0; i < TAM; i++)
    {
        letra [i] = getchar();
    }
    for (size_t i = 0; i < TAM; i++)
    {
        putchar(toupper(letra[i]));
    }
    system("PAUSE");
    return 0;
}