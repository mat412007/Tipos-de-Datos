#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
    int ux = atoi(argv[1]);
    int uy = atoi(argv[2]);
    int uz = atoi(argv[3]);
    int vx = atoi(argv[4]);
    int vy = atoi(argv[5]);
    int vz = atoi(argv[6]);
    int resultado1 = uy*vz - uz*vy;
    int resultado2 = uz*vx - ux*vz;
    int resultado3 = ux*vy - uy*vx;
    printf("%d;%d;%d\n", resultado1, resultado2, resultado3);
    return 0;
}