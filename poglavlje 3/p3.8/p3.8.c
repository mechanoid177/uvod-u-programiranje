#include<stdio.h>

main(){
    int a, n;
    printf("Unesite broj: "); scanf("%d", &a);
    printf("Unesite stepen broja 2: "); scanf("%d", &n);
    printf("Broj %d*2^%d=%d\n", a, n, a<<n<<2);
    return 0;
}
