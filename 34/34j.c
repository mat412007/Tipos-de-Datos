#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[1]){
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    printf("El valor de a es %d, y el valor de b es %d.\n", a, b);
    printf("El valor de a es %d, y el valor de b es %d.\n", b, a);
    return 0;
}