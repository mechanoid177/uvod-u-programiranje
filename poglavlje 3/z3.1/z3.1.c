#include<stdio.h>

main(){
    int i, n, s=0;
    printf("Unesite broj: "); scanf("%d", &n);
    for(i=1; i<=n; i++)
        s+=i;
    printf("Zbir prvih %d brojeva je: %d\n", n, s);
    return 0;
}
