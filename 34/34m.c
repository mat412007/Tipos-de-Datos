#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int u1 = atoi(argv[1]);
    int u2 = atoi(argv[2]);
    int v1 = atoi(argv[3]);
    int v2 = atoi(argv[4]);
    int suma1 = u1+v1;
    int suma2 = u2+v2;
    printf("%d;%d", suma1, suma2);
    return 0;
}