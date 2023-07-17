#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int dinero = atoi(argv[1]);
    if(dinero < 0){
        printf("Error\n");
        return 1;
    }
    int b1000 = dinero / 1000;
    int b500 = (dinero % 1000) / 500;
    int b200 = ((dinero % 1000) % 500) / 200;
    int b100 = (((dinero % 1000) % 500) % 200) / 100;
    int b50 = ((((dinero % 1000) % 500) % 200) % 100) / 50;
    int b20 = (((((dinero % 1000) % 500) % 200) % 100) % 50) / 20;
    int b10 = ((((((dinero % 1000) % 500) % 200) % 100) % 50) % 20) / 10;
    printf("1000:%d, 500:%d, 200:%d, 100:%d, 50:%d, 20:%d, 10:%d\n", b1000, b500, b200, b100, b50, b20, b10);
    return 0;
}