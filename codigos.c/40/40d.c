#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    double a = atof(argv[1]);
    double b = atof(argv[2]);
    double promedio = (a + b) / 2.0;
    printf("El promedio es %.2f", promedio);
    return 0;
}