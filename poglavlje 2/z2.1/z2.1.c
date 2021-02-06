#include<stdio.h>

main(){
    int a, b, c;
    printf("Unesite 3 cela broja\n");
    scanf("%d\n%d\n%d", &a, &b, &c);
    printf("Najveci broj je: %d\n", c < (a<b ? b : a) ? (a<b ? b : a) : c);
    system("pause");
}
