#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int horas = atoi(argv[1]);
    int salario = atoi(argv[2]);
    float salxhora = horas*salario;
    printf("%.2f\n", salxhora);
    return 0;
}