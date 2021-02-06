#include <stdio.h>

int fib(int n){
    if(n == 1 || n == 2) return 1;
    return fib(n - 2) + fib(n - 1);
}

double raz_iter(int n){
    double raz = 1;
    while(n){
        raz = fib(n) + 1 / raz;
        n--;
    }
    return raz;
}

double raz_rek(int i, int n){
    if(i > n) return 1;
    return fib(i) + 1 / raz_rek(i + 1, n);
}

main(){
    int n;
    printf("Uesite dubinu: ");
    scanf("%d", &n);
    printf("iter = %lf\n", raz_iter(n));
    printf("rek = %lf\n", raz_rek(1, n));
}
