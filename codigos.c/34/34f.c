#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
    double x = atof(argv[1]);
    double y = atof(argv[2]);
    double t = atof(argv[3]);
    float g = 9.80665;
    float resultado = x + (y * t) - (0.5 * g * pow(t, 2));
    printf("%f\n", resultado);
    return 0;
}