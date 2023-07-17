#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);
    int d = atoi(argv[4]);
    int e = atoi(argv[5]);
    int suma = 0;
    if(a % 2 == 1){
        suma += a;
    }
    if(b % 2 == 1){
        suma += b;
    }
    if(c % 2 == 1){
        suma += c;
    }
    if(d % 2 == 1){
        suma += d;
    }
    if(e % 2 == 1){
        suma += e;
    }
    printf("La suma de los impares da %d\n", suma);
    return 0;
}