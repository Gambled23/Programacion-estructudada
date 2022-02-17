#include <stdio.h>
#include <stdlib.h>

//Practica 41
int main()
{
    int x[3][3] = {7, 15, 3, 4, 9, 11, 6, 2, 5}, y[3] = {0, 0, 0}, i, j, m = 1;
    for (size_t i = 0; i < 3; i++)
    {
        m = 1;
        for (size_t j = 0; j < 3; j++)
        {
            m = m * x[i][j];
            y[i] = m;
        }
    }
    for (size_t i = 0; i < 3; i++)
    {
        printf("%d \n", y[i]);
        y[i]= m+i;
    }
    for (size_t i = 0; i < 3; i++)
    {
        printf("(%d) %d \n", i+1, y[i]);
    }
    system("PAUSE");
    return 0;
}