#include<stdio.h>

main(){
    int n, p = 1;
    printf("Unesite broj: "); scanf("%d", &n);
    for(n; n >= 1; n -= 2)
        p *= n;
    printf("%d\n", p);
}
