#include <stdio.h>
#include <math.h>

main(){
    float a, b, c, d, D, x1, x2;
    printf("Unesite vrednosti za koeficijente "
            "a, b, c i d jednacine oblika ax^2+bx+c=d\n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);
    printf("d = ");
    scanf("%f", &d);
    D=b*b-4*a*(c-d);
    if(D==0)
        printf("x1 = x2 = %f\n", -b/2*a);
    else if(D>0){
        x1=(-b+sqrt(D))/2*a;
        x2=(-b-sqrt(D))/2*a;
        printf("x1 = %f\nx2 = %f\n", x1, x2);
    }
    else
        printf("Ne postoje realna resenja\n");
    system("pause");
}
