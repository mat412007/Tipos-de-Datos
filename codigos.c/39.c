#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[0]){
    int year = atoi(argv[1]);

    if((year & 4 == 0 && year % 100 != 0) || year % 400 == 0){
        printf("%d es bisiesto\n", year);
    }
    else{
        printf("%d no es bisiesto\n", year);
    }
    
    return 0;
 }