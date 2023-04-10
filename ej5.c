#include <stdio.h>

int main(int argc, char const *argv[])
{
        // Define un array con la cantidad de dias de todos los meses
    int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    // Le pide al usuario que ingrese un mes y un dia de ese mes
    printf("Ingrese un mes y una fecha\n Ej:Enero = 1 Diciembre = 12\n");
    int mes;
    scanf("%d", &mes);
    int fecha;
    scanf("%d", &fecha);
    int dias = 0;
    // Suma a la variable dias la cantidad de meses en cada mes hasta llegar al mes ingresado 
    for (int i = 0; i < mes - 1; i++)
    {
        dias += a[i];
    }
    // Le suma a la variable idas la cantidad de dias que ya pasaron
    dias += fecha;
    dias = 365 - dias;
    // Imprime el resultado
    printf("Quedan %d dias", dias);
}