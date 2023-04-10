#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Ingresar numeros en el array
    float a[10];
    printf("Ingrese 10 numeros reales\n");
    for (int i = 0; i < 10; i++)
    {
        int num;
        scanf("%0.2f", &num);
        a[i] = num;
    }

    // Calcular el promedio
    float prom = 0;
    for (int i = 0; i < 10; i++)
    {
        prom += a[i];
    }
    prom /= 10;
    
    for (int i = 0; i < 10;i++){
        if(a[i] > prom) printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}