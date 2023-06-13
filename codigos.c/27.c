#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    double h = sqrt(a*a + b*b);
    printf("La hipotenusa es igual a %f", h);
    return 0;
}