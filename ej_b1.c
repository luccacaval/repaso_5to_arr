#include <stdio.h>

int main(int argc, char const *argv[])
{
    //Ingresar los valores en la matriz
    int a [2][2];
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf("Ingrese el valor para la coordenada (%d : %d)\n", j, i);
            int num;
            scanf("%d", &num);
            a[i][j] = num;
        }
    }
    int b[2][2];
    // Transponer la matriz
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
           b[i][j] = a[j][i];
        }
    }
    // 
    for (int i = 0; i < 2; i++){
       for (int j = 0; j < 2; j++){
        printf("%d ", b[i][j]);
       }
       printf("\n");
    }
    printf("\n");
    return 0;
}
