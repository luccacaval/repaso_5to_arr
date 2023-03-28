#include <stdio.h>

int main(void){
    int a[2];
    int b[2];
    printf("Ingrese el primer vector\n");
    scanf("%d %d", &a[0],&a[1]);
    printf("Ingrese el segundo vector\n");
    scanf("%d %d", &b[0],&b[1]);
    int c[2];
    for (int i = 0; i < 2;i++){
        c[i] = a[i] - b[i];
    }
    for(int i = 0; i < 2;i++){
        printf("%d ",c[i]);
    }
    printf("\n");
    return 0;
}