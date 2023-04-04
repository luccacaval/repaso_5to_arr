#include <stdio.h>
#include <math.h>
#define PI 3.141592654

int main(int argc, char const *argv[])
{
    int a[2];
    int b[2];
    printf("Ingrese el primer vector\n");
    scanf("%d %d", &a[0],&a[1]);
    printf("Ingrese el segundo vector\n");
    scanf("%d %d", &b[0],&b[1]);
    int det = a[0] * b[1] - a[1] - b[0];
    if (det == 0){
        printf("Esos dos vectores son linealmente dependientes");
    } else{
        printf("Esos dos vectores no son linealmente dependientes");
    }
    
    return 0;
}
