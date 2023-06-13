#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
    double P = atof(argv[1]);
    double r = atof(argv[2]);
    double t = atof(argv[3]);
    double resultado = P * exp(r * t);
    printf("La cantidad de dinero es %lf\n", resultado);
    return 0;
}