#include<stdio.h>

main(){
    int n, cf, i, c, br = 0;
    float x;
    printf("Unesite broj: "); scanf("%d", &n);
    printf("Unesite cifru: "); scanf("%d", &cf);
    x = pow(10, round(log10(n) + 1));
    for(i = 10; i <= x; i*= 10){
        c = n % 10;
        n /= 10;
        if(c == cf){
            i /= 10;
            continue;
        }
        br += c * i / 10;
    }
    printf("%d\n", br);
    return 0;
}
