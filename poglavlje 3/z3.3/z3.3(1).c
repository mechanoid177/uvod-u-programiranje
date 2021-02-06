#include<stdio.h>

main(){
    int i, n, s=0;
    printf("Unesite broj: "); scanf("%d", &n);
    for(i=1; i<=n; i+=2){
            s+=i;
    }
    printf("Zbir neparnih prirodnih brojeva od 1 do %d je: %d\n", n, s);
    return 0;
}
