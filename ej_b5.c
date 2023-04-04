#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[2][2];
    int b[2][2];
    int c[2][2];
    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 2;j++){
        printf("Ingrese el valor para las cordenadas (%d : %d) de la primer matriz\n",j,i);
        scanf("%d", &a[i][j]);
        }
    }
     for (int i = 0; i < 2; i++){
        for(int j = 0; j < 2;j++){
            printf("Ingrese el valor para las cordenadas (%d : %d) de la segunda matriz\n",j,i);
        scanf("%d", &b[i][j]);
        }
    }
    
    c[0][0] = a[0][0] * b[0][0] + a[0][1] * b[1][0];
    c[0][1] = a[0][0] * b[0][1] + a[0][1] * b[1][1];
    c[1][0] = a[1][0] * b[0][0] + a[1][1] * b[1][0];
    c[1][1] = a[1][0] * b[1][1] + a[1][1] * b[1][1]; 

    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 2;j++){
        printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
