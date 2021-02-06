#include <stdio.h>
#include <math.h>

int pow1(int x, int n){
    if(n == 1) return x;
    return x * pow1(x, n - 1);
}

main(){
    int x, n;
    printf("Unesite broj: ");
    scanf("%d", &x);
    printf("Uneiste eksponent: ");
    scanf("%d", &n);
    printf("pow = %lf, pow1 = %d\n", pow(x, n), pow1(x, n));
}
