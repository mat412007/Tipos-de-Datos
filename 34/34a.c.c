#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    if(a % b == 0|| b % a == 0){
        printf("Verdadero\n");
    }
    else{
        printf("Falso\n");
    }
    return 0;
}