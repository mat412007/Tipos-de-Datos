#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
    int a = atoi(argv[1]);
    float eq1 = pow(cos(a), 2);
    float eq2 = pow(sin(a), 2);
    float eq3 = (pow(cos(a), 2)) + (pow(sin(a), 2));
    printf("cos() = %f\n", eq1);
    printf("sen() = %f\n", eq2);
    printf("cos() + sen() = %f\n", eq3);
    return 0;
}