#include <stdio.h>

main(){
    float a, b, c;
    printf("\tUnesite duzine stranica: \n");
    printf("\ta = ");
    scanf("%f", &a);
    printf("\tb = ");
    scanf("%f", &b);
    printf("\tc = ");
    scanf("%f", &c);
    if(a+b>c && a+c>b && b+c>a)
        printf("\tMoze da se napravi trougao od unetih stranica\n");
    else
        printf("\tNe moze da se napravi trougao od unetih stranica\n");
    system("pause");
}
