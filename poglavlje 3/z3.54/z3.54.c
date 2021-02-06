#include<stdio.h>

main(){
    int i, n, s, k;
    s = k = 0;
    printf("Unesite broj: "); scanf("%d", &n);
    for(i = 2; s <= n; i += 2){
        s += i;
        k++;
    }
    printf("Najmanji broj sabiraka je %d\n", k);
}
