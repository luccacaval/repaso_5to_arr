#include <stdio.h>

int main(void){
    int a[2];
    int b[2];
    // Ingresa los valores de los dos vectores
    printf("Ingrese el primer vector\n");
    scanf("%d %d", &a[0],&a[1]);
    printf("Ingrese el segundo vector\n");
    scanf("%d %d", &b[0],&b[1]);
    int c[2];
    // Resta los vectores
    for (int i = 0; i < 2;i++){
        c[i] = a[i] - b[i];
    }
    // Imprime el nuevo vector
    for(int i = 0; i < 2;i++){
        printf("%d ",c[i]);
    }
    printf("\n");
    return 0;
}