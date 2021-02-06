#include<stdio.h>

main(){
    int i, n;
    float s;
    printf("Unesite broj clanova reda: "); scanf("%d", &n);
    for(i=1; i<=n; i++)
        s+=(1.0/i);
    printf("Zbir prvih %d clanova niza je: %f", n, s);
}
