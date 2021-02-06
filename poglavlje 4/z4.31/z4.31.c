#include <stdio.h>

int max4(int* a, int* b, int* c, int* d){
    int max = 0;
    if(*a > max) max = *a;
    if(*b > max) max = *b;
    if(*c > max) max = *c;
    if(*d > max) max = *d;
    return max;
}

main(){
    int a, b, c, d;
    printf("Unesite 4 broja: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    printf("Najveci je %d\n", max4(&a, &b, &c, &d));
}
