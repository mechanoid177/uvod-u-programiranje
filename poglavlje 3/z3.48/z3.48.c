#include<stdio.h>

main(){
    int n, i, d, k;
    while(d != 0){
        k = 0;
        printf("Unesite broj: "); scanf("%d", &n);
        for(i = 1; i <= 64; i++){ //kako da znam koliko int koristi bitova?
            k += n & 1;
            n >>= 1;
        }
        printf("%d\n", k);
        scanf("%d", &d);
    }
}
