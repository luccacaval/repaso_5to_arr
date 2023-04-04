#include <stdio.h>

int main(int argc, char const *argv[])
{
    int dias[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    char *Meses[] = {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
    for (int i = 0; i < 12; i++){
        if (dias[i] == 30)
        {
            printf("%s tiene 30 dias\n", Meses[i]);
        }
        
    }
    printf("\n");
    return 0;
}
