#include<stdio.h>

main(){
    int n, x = 128;
    printf("Unesite broj: "); scanf("%d", &n);
    while(x > 0){
        printf("%d", (n & x) > 0 ? 1 : 0);
        x = x >> 1;
    }
}
