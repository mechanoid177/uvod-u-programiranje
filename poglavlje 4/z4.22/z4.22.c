#include <stdio.h>
#include <math.h>

int fib(int n){
    if(n == 1 || n == 2) return 1;
    return fib(n - 1) + fib(n - 2);
}

double sqrt_iter(int n){
    double s = 0;
    int i;
    for(i = n; i >= 1; i--){
        printf("i = %d\n", i);
        s = sqrt(s + fib(i));
        printf("s = %lf\n", s);
    }
    return s;
}

double sqrt_rek(int i, int n){
    if(n < i) return 0;
    return sqrt(fib(i) + sqrt_rek(i + 1, n));
}

main(){
    int n;
    printf("Unesite clan niza: ");
    scanf("%d", &n);
    printf("iter = %lf\n", sqrt_iter(n));
    printf("rek = %lf\n", sqrt_rek(1, n));
}
