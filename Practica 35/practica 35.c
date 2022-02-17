#include <stdio.h>
#include <stdlib.h>

//Practica 35 Suma de dos arreglos unidimensionales
int main()
{
    float A[5] = {3.2, 4.6, 1.7, 8.3, 5.2}, B[5] = {4.9, 7.1, 9.5, 2.7, 6.8}, C[5];
    for (size_t i = 0; i <= 4; i++)
    {
        C[i] = A[i] + B[i];
        printf("%.2f + %.2f = %.2f \n", A[i], B[i], C[i]);
    }
    system("PAUSE");
    return 0;
}