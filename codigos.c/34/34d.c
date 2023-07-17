#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    float ecuacion = sqrt(pow(x, 2) + pow(y, 2));
    printf("%f\n", ecuacion);
    return 0;
}