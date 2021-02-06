#include<stdio.h>

main(){
    int x;
    printf("Unesite broj: ");
    scanf("%d", &x);
    printf("abs(%d)=%d\n", x, x<0 ? -x : x);
    system("pause");
}
