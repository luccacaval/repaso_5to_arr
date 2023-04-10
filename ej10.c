#include <stdio.h>

int main (void){
    int a[3];
    int b[3];
    // Ingresa los valores de los dos vectores
    printf("Ingrese el primer vector\n");
    scanf("%d %d %d", &a[0],&a[1],&a[2]);
    printf("Ingrese el segundo vector\n");
    scanf("%d %d %d", &b[0],&b[1],&b[2]);
    int res = 0;
    // Calcular el producto escalar
    for(int i = 0;i < 2;i++){
        res += a[i] * b[i];
    }
    // Imprimir el resultado
    printf("Producto escalar = %d", res);
    return 0;
}