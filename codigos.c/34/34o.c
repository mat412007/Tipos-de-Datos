#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    float horas = atof(argv[1]);
    float salario = atof(argv[2]);
    float salxhora = horas*salario;
    printf("%.4f\n", salxhora);
    return 0;
}