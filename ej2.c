#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[5];
    // Ingresa valores ingresados por el usuario en el array
    printf("Ingrese 5 numeros\n");
    for (int i = 0; i < 5; i++) {
        int num;
        scanf("%d", &num);
        a[i] = num;
    }
    // Recorre el array a la inversa e imprime los elementos
    for (int j = 4; j >= 0; j = j - 1){
        printf("%d", a[j]);
    }
    printf("\n");
    
    return 0;
}
