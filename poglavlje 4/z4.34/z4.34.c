#include <stdio.h>

int max4(int* a, int* b, int* c, int* d){
    int max = 0, max1 = 0;
    if(*a % 10 > max1){
            max = *a;
            max1 = *a % 10;
    }
    if(*b % 10 > max1){
            max = *b;
            max1 = *b % 10;
    }
    if(*c % 10 > max1){
            max = *c;
            max1 = *c % 10;
    }
    if(*d % 10 > max1){
            max = *d;
            max1 = *d % 10;
    }
    return max;
}

main(){
    int a, b, c, d;
    printf("Unesite brojeve: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    printf("Najvecu cifru ima: %d\n", max4(&a, &b, &c, &d));
}
