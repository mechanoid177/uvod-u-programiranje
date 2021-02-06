#include<stdio.h>

main(){
    int n;
    printf("Unesite broj: "); scanf("%d", &n);
    if(n & 1) printf("Broj je neparan\n");
    else printf("Broj je paran\n");
}
