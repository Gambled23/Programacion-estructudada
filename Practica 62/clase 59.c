#include <stdlib.h>
#include <stdio.h>
#include <string.h>
struct corredor
{
    char nombre[30];
    int edad;
    char sexo[20];
    char club[50];
}corredor1;

void main ()
{
    //entrada de datos
    char categoria[20];
    printf("Digita tu nombre\n");
    gets(corredor1.nombre);
    printf("Digita tu edad\n");
    scanf("%d", &corredor1.edad);
    fflush(stdin);
    printf("Digita tu sexo\n");
    gets(corredor1.sexo);
    printf("Digita tu club\n");
    gets(corredor1.club);
    //aspaignar categoria
    if (corredor1.edad <= 18)
    {
        strcpy(categoria,"juvenil");
    }else if (corredor1.edad <= 40)
    {
        strcpy(categoria,"senior");
    }else strcpy(categoria,"veterano");
    //salida de datos
    printf("\nDatos del corredor\n");
    printf("Nombre del corredor: %s\n", corredor1.nombre);
    printf("Edad del corredor: %d\n", corredor1.edad);
    printf("Sexo del corredor: %s\n", corredor1.sexo);
    printf("Club del corredor: %s\n", corredor1.club);
    printf("Categoria en la que participa: %s\n", categoria);
}