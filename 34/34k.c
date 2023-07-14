#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
    float u1 = atof(argv[1]);
    float u2 = atof(argv[2]);
    float v1 = atof(argv[3]);
    float v2 = atof(argv[4]);
    float producto = (u1 * v1) + (u2 * v2);
    printf("%.4f\n", producto);
    return 0;
}