#include <stdio.h>
#include <limits.h>

int main (void) {
    int a[4];
    printf("Ingrese 4 numeros\n");
    scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);
    int i, j, n = 4;
    for (i = 0; i < n; i++){
        for (j = 0; j < n - i - 1; j++){
            if(a[j] > a[j+1]) {
            int temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
            }
            j++;
        }
        for (i = 0; i < 4; i++)  {
        printf("%d ", a[i]);
    }
    printf("\n");
    }
    for (i = 0; i < 4; i++)  {
        printf("%d ", a[i]);
    }
    printf("Mediana = %d \n", (a[1] + a[2]) / 2);
}
