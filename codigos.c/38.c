#include <stdio.h>

int main(){
    int r, g, b;
    double c, m , y, k;

    printf("Introduce los valores R, G, B (en el rango de 0 a 255): \n");
    printf("R = ");
    scanf("%d", &r);
    printf("G = ");
    scanf("%d", &g);
    printf("B = ");
    scanf("%d", &b);

    //Convertir RGB a CMY
    c = 1.0 - (double)r / 255;
    m = 1.0 - (double)g / 255;
    y = 1.0 - (double)b / 255;

    //Calcular K
    if(r == 0 && g == 0 && b == 0){
        k = 1.0;
        c = m = y = 0.0;
    }
    else{
        k = fmin(fmin(c, m), y);
        c = (c - k) / (1.0 - k);
        m = (m - k) / (1.0 - k);
        y = (y - k) / (1.0 - k);
    }

    //Mostrar los valores de CMYK
    printf("Los valores de CMYK son: \n");
    printf("C = %.2lf\n", c);
    printf("M = %.2lf\n", m);
    printf("Y = %.2lf\n", y);
    printf("K = %.2lf\n", k);

    return 0;
}