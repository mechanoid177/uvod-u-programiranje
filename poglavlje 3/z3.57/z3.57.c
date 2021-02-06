#include<stdio.h>

main(){
    int n, c, max = 0, min = 10;
    printf("Unesite broj: "); scanf("%d", &n);
    while(n != 0){
        c = n % 10;
        //printf("%d\n", c);
        if(c > max) max = c;
        if(c < min) min = c;
        n /= 10;
        //printf("%d %d\n", min, max);
        //printf("%d\n", n);
    }
    printf("Suma je %d\n", min + max);
}
