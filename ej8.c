#include <stdio.h>
#include <limits.h>

int main (void){
    int a[10];
    printf("Ingrese 10 numeros\n");
    // Ingresar los numeros en el array
    for (int i = 0; i < 10; i++) {
        int num;
        scanf("%d", &num);
        a[i] = num;
    }
    int max = INT_MIN;
    // Recorre el array en busca del maximo
    for(int i = 0; i < 10;i++){
        if(a[i] > max) max = a[i];
    }
    // Imprime el maximo
    printf("El maximo ingresado es %d\n", max);
    return 0;
}