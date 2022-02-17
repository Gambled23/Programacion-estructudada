#include <stdio.h>
#include <stdlib.h>


float calificaciones = 0;
float promedio ()
{
    int temp = 0;
    for (size_t i = 0; i < 5; i++)
    {
        scanf("%d", &temp);
        calificaciones = calificaciones + temp;
    }
    calificaciones = calificaciones / 5;
    return(calificaciones);
}
int main ()
{
    printf("Ingresa las 5 calificaciones\n");
    promedio();
    printf("El promedio es de %.2f\n", calificaciones);
    system("PAUSE");
    return 0;
}