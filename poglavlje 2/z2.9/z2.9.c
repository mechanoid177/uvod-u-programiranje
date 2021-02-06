#include<stdio.h>

main(){
    float a, b;
    printf("Unesite vrednosti za koeficijente a i b u jednacini ax+b=0.\n");
    scanf("%f\n%f", &a, &b);
    printf("x = %f\n", -b/a);
    system("pause");
}
