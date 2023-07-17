#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    int dia = atoi(argv[1]);
    int mes = atoi(argv[2]);
    if(mes > 3 && mes < 6){
        printf("Verdadero\n");
    }
    else if(mes == 3 && dia >= 20){
        printf("Verdadero\n");
    }
    else if(mes == 6 && dia <= 20){
        printf("Verdadero\n");
    }
    else{
        printf("Falso\n");
    }
    return 0;
}