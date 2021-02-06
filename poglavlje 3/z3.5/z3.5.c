#include<stdio.h>

main(){
    int f=1, i, n;
    printf("Unesite broj: "); scanf("%d", &n);
    for(i=1; i<=n; i++){
        f*=i;
    }

    printf("Faktorijal zeljenog broja je: %d", f);
}
