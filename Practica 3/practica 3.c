#include <stdio.h>
#include <stdlib.h>

//Practica 3 Promedio de 3 calificaciones
int main()
{
    int cal1, cal2, cal3, promedio;
    printf("Dame las 3 calificaciones\n");
    scanf("%d%d%d", &cal1, &cal2, &cal3);
    promedio = (cal1 + cal2 + cal3)/3;
    printf ("El promedio es: %d \n", promedio);
    system("PAUSE");
    return 0;
}