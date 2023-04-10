#include <stdio.h>
#include <math.h>

int c[2][2];

int det2(int a[2][2]){
    return a[0][0] * a[1][1] - a[0][1] *  a[1][0];
}

int det3(int a[3][3]){
    return a[0][0] * ((a[1][1] * a[2][2]) - (a[1][2] * a[2][1])) - a[0][1] * ((a[1][0] * a[2][2]) - (a[1][2] * a[2][0])) + a[0][2] * ((a[1][0] * a[2][1] ) - (a[1][1] * a[2][0]));
}

void fill_mtx(int idx_x, int idx_y, int arr[3][3]){
   int c_y = 0;
   int c_x = 0;
   int i = 0;
   while (i < 3){
    if (i != idx_y){
        int j = 0;
        while (j < 3) {
            if (j != idx_x){
                c[c_y][c_x] = arr[i][j];
                c_x++;
            }
            j++;
            }
        c_y++;
        c_x = 0;
        }
    i++;
   }
}

   
int main(int argc, char *argv[])
{
int a[3][3];
int b[3][3];
float d[3][3];
// Llenar la matriz con numeros ingresados por el usuario
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("Ingrese el valor para la coordenada (%d : %d)\n", j, i);
            int num;
            scanf("%d", &num);
            a[i][j] = num;
        }
    }

// Recorer todos los elementos de la matriz para obtener la matriz adjunta
for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            //Crear una matriz con elementos que no pertenezcan ni a la fila ni a la columna del elemento actual 
            fill_mtx(j,i,a);
            // Revisar si el elemento debe ser nagativo o positivo y asgnarle el valor de la determinante de la matriz anterior
            b[i][j] = pow(-1, (i+1)+(j+1)) * det2(c);
        }
    }

// Obtener la determinante de la matriz ingresada
int det_a = det3(a);


// Transponer la matriz adjunta y dividir todos los elemnetos por el valor de la determinante
for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            d[i][j] = a[j][i];
            d[i][j] /= det_a;
        }
    }
// Imprimir la matriz inversa
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%0.2f ", d[i][j]);
        }
        printf("\n"); 
    }
    printf("\n");
}