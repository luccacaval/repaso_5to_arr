#include <stdio.h>
#include <math.h>

int c[2][2];

int det(int a[2][2]){
    return a[0][0] * a[1][1] - a[0][1] *  a[1][0];
}

void fill_mtx(int idx_x, int idx_y, int arr[3][3]){
   printf("Entro a la funcion que rellena la matriz");
   int c_y = 0;
   int c_x = 0;
   int i = 0;
   while (i < 3){
    printf("Ingreso al while 1 i= %d\n", i);
    if (i != idx_y){
        int j = 0;
        while (j < 3) {
        printf("Ingreso al while 2 j= %d\n", j);
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

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("Ingrese el valor para la coordenada (%d : %d)\n", j, i);
            int num;
            scanf("%d", &num);
            a[i][j] = num;
        }
    }

for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            fill_mtx(j,i,a);
            b[i][j] = pow(-1, (i+1)+(j+1)) * det(c);
        }
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n"); 
    }
    printf("\n");
    
    return 0;
}
