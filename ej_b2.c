#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Ingresar valores por la matriz
    int a[3][3];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("Ingrese el valor para la coordenada (%d : %d)\n", j, i);
            int num;
            scanf("%d", &num);
            a[i][j] = num;
        }
    }

    // Calcular la determinante
    int res = a[0][0] * ((a[1][1] * a[2][2]) - (a[1][2] * a[2][1])) - a[0][1] * ((a[1][0] * a[2][2]) - (a[1][2] * a[2][0])) + a[0][2] * ((a[1][0] * a[2][1] ) - (a[1][1] * a[2][0]));
    //Imprimir el resultado
    printf("%d", res);
    return 0;
}
