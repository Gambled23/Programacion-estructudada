#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>

//
int main()
{
    const char *args[] = { "vim", "/home/ben/tmp3.txt", NULL };
    printf ("Vamos a iniciar el programa \n");
    execvp("practica 7", args);
    system("PAUSE");
    return 0;
}