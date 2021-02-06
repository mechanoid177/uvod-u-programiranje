#include<stdio.h>
#include<math.h>

main(){
    float a, b, c, D;
    printf("Unesite vrednosti koeficijenata a, b i c za jednacinu ax^2+bx+c=0.\n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);
    D=sqrt(b*b-4*a*c);
    if(D>0)
        printf("Resenja su realna i razlicita\n");
    else if(D==0)
        printf("Resenja su realna i jednaka\n");
    else
        printf("Resenja su konjugovano kompleksna\n");
    system("pause");
}
