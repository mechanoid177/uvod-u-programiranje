#include<stdio.h>

main(){
    int n, i;
    double s = 0;
    printf("Unesite broj clanova niza: "); scanf("%d", &n);
    for(i = 1; i <= n; i++){
        s += 1.0 / (2 * i - 1);
    }
    printf("Suma: %f", s);
}
