#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int dia = atoi(argv[1]);
    int an = dia / 365;
    int semanas = (dia % 365) / 7;
    int dias = (dia % 365) % 7;
    printf("Son %d anos, %d semanas, y %d dias", an, semanas, dias);
    return 0;
}