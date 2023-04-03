#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[3];
    int b[3];
    printf("Ingrese el primer vector\n");
    scanf("%d %d %d", &a[0],&a[1],&a[2]);
    printf("Ingrese el segundo vector\n");
    scanf("%d %d %d", &b[0],&b[1],&b[2]);
    int c[] = {(a[1] * b[2] - a[2] * b[1]), -(a[0] * b[2] - a[2] * b[0]), (a[0] * b[1] - a[1] * b[0])};
    for (int i = 0; i < 3; i++)
    {
        printf("%d ",c[i]);
    }
    
    return 0;
}
