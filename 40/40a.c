#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int numero = atoi(argv[1]);

    if(numero < 0){
        printf("%d\n", -numero);
    }
    else{
        printf("%d\n", numero);
    }

    return 0;
}