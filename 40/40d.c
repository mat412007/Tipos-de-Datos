#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    double a = atoi(argv[1]);
    double b = atoi(argv[2]);
    double promedio = (a + b) / 2.0;
    printf("%.2f", promedio);
    return 0;
}