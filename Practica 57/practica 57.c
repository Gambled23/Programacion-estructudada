#include <stdio.h>
#include <stdlib.h>

//Practica 57 Promedio 5 calificaciones
//Prototipos
float promedio(int a, int b, int c, int d, int e);
//Funciones
int main()
{
    //variables
    float calificaciones;
    int a, b, c, d, e;
    //Entradad de datos
    printf("Ingresa las 5 calificaciones\n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    calificaciones = promedio(a, b, c, d, e);
    printf("El promedio es de %.2f\n", calificaciones);
    system("PAUSE");
    return 0;
}
float promedio(int a, int b, int c, int d, int e)
{
    return ((a + b + c + d + e) / 5);
}