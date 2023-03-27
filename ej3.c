#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    printf("Ingrese un mes\n Ej:Enero = 1 Diciembre = 12\n");
    int selec;
    scanf("%d", &selec);
    printf("El mes %d tiene %d dias", selec, a[selec]);
    return 0;
}
