#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);
    if(a >= b + c || b >= a + c || c >= b + a){
        printf("Falso\n");
    }
    else{
        printf("Verdadero\n");
    }
    return 0;
}