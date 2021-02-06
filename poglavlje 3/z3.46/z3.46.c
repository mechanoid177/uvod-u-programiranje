#include<stdio.h>

main(){
    int a, n;
    printf("Unesite broj: "); scanf("%d", &a);
    printf("Unesite broj bita: "); scanf("%d", &n);
    printf("Promenjen broj je: %d\n", a&~(1 << (n - 1)));
}
