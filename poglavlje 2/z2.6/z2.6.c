#include<stdio.h>

main(){
    int a1, a2, b1, b2;
    printf("Unesite katete prvog trougla: ");
    scanf("%d %d", &a1, &b1);
    printf("Unesite katete drugog trougla: ");
    scanf("%d %d", &a2, &b2);
    printf("Vecu povrsinu ima %s trougao.\n", (a1*b1/2)<(a2*b2/2) ? "drugi" : "prvi");
    system("pause");
}
