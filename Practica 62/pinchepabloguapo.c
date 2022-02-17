#include <stdlib.h>
#include <stdio.h>

struct vestimenta
{
    int tallaZapatos;
    int tallaCamisa;
    int tallaPantalon;
};

struct persona
{
    char nombre[30];
    int edad;
    struct vestimenta ropa_persona;
} pablo;
void main()
{
    printf("Digita tu nombre\n");
    gets(pablo.nombre);
    printf("Digita tu edad\n");
    scanf("%d", &pablo.edad);
    printf("Digita tu talla de camisa\n");
    scanf("%d", &pablo.ropa_persona.tallaCamisa);
    printf("Digita tu talla de zapatos\n");
    scanf("%d", &pablo.ropa_persona.tallaZapatos);
    printf("Digita tu talla de pantalon\n");
    scanf("%d", &pablo.ropa_persona.tallaPantalon);

    //imprimir datos
    printf("%s su edad es %d", pablo.nombre, pablo.edad);
    printf("El empleado %s tiene una edad de %d, su talla de camisa es %d, su talla de pantalon es %d y de zapatos es %d\n", pablo.nombre, pablo.edad, pablo.ropa_persona.tallaCamisa, pablo.ropa_persona.tallaPantalon, pablo.ropa_persona.tallaZapatos);
    system("PAUSE");
}