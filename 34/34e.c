#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
    double t = atof(argv[1]);
    double result = sin(2 * t) + sin(3 * t);
    printf("%f\n", result);
    return 0;
}