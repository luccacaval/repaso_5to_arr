#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    printf("Ingrese un mes y una fecha\n Ej:Enero = 1 Diciembre = 12\n");
    int mes;
    scanf("%d", &mes);
    int dias = 0;
    for (int i = 0; i < mes - 1; i++)
    {
        dias += a[i];
    }
    int fecha;
    scanf("%d", &fecha);
    dias += fecha;
    printf("Es el dia numero %d", dias);
}