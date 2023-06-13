#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
    int a = atoi(argv[1]);
    double ecuacion = cos(a)*cos(a) + sin(a)*sin(a);
    printf("%f\n", ecuacion);
    return 0;
}