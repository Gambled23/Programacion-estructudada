#include <stdio.h>
#include <stdlib.h>

//Practica 8 Selectiva simple
int main()
{
    //Entradad de datos
    int ed;
    printf("Dame tu edad: \n");
    scanf("%d", &ed);
    
    //Estructuras de control
    if (ed < 18)
    {
        printf("Eres menor de edad \n");
        printf("No puedes votar \n");
    }
    printf("Que tengas un buen dia \n");
    system("PAUSE");
    return 0;
}