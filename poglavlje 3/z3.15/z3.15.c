#include<stdio.h>

main(){
    int n, i, c, a = 0, max = 0;
    double x;
    printf("Unesite broj: "); scanf("%d", &n);
    x = pow(10, round(log10(n) + 1));
    //printf("%f\n", x);
    for(i = 10; i <= x; i *= 10){
        c = n % 10;
        n /= 10;
        //printf("%d\n", c);
        if(c >= a && c >= max){
            max = c;
        }
        else if(a >= c && a >= max){
            max = a;
        }
        a = c;
        //printf("%d\n", max);
    }
    printf("Najveca cifra je: %d\n", max);
    return 0;
}
