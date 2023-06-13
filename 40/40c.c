#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    if(a > b){
        printf("%d\n", b);
    }
    else{
        printf("%d\n", a);
    }

    return 0;
}
