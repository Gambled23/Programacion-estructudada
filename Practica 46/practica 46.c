#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Practica 46
int main()
{
    char cadena[26];
    int total;
    printf("Introduce una oracion maximo 25 caracteres \n");
    gets(cadena);
    total = strlen(cadena);
    printf("La longitud de la cadena es de %d caracteres \n", total);
    system("PAUSE");
    return 0;
}