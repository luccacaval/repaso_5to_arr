#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Define un array con la cantidad de dias de todos los meses
    int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    // Le pide al usuario que elija un mes
    printf("Ingrese un mes\n Ej:Enero = 1 Diciembre = 12\n");
    int selec;
    scanf("%d", &selec);
    // Impreme la cantidad de dias en un mes
    printf("El mes %d tiene %d dias", selec, a[selec - 1]);
    return 0;
}
