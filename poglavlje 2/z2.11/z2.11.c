#include<stdio.h>

main(){
    float k1, k2, n1, n2;
    printf("Unesite vrednosti koeficijenata prave k i parametara n\n");
    printf("za eksplicitne oblike jednacina pravih y=kx+n.\n");
    printf("k1 = ");
    scanf("%f", &k1);
    printf("n1 = ");
    scanf("%f", &n1);
    printf("k2 = ");
    scanf("%f", &k2);
    printf("n2 = ");
    scanf("%f", &n2);
    if(k1==k2 && n1==n2)
        printf("Prave su podudarne\n");
    else if(k1==k2)
        printf("Prave su paralelne\n");
    else
        printf("Prave se seku\n");
    system("pause");
}
