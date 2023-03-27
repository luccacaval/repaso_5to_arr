#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a[10];
    printf("Ingrese 10 numeros reales");
    for (int i = 0; i < 10; i++)
    {
        int num;
        scanf("%0.2f", &num);
        a[i] = num;
    }
    float prom = 0;
    for (int i = 0; i < 10; i++)
    {
        prom += a[i];
    }
    prom /= 10;
    
    return 0;
}
