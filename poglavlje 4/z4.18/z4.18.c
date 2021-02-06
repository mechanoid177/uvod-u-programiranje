#include <stdio.h>
#include <math.h>

double sqrt_iter(int n){
    int i;
    double s;
    if(n % 2 == 0) n--;
    s = 0;
    for(i = n; i >= 1; i -= 2){
        s = sqrt(s + i);
    }
    return s;
}

double sqrt_rek(int i, int n){
    if(n % 2 == 0) n--;
    if(n == i) return sqrt(i);
    return sqrt(i + sqrt_rek(i + 2, n));
}

main(){
    int n;
    printf("Unesite broj: ");
    scanf("%d", &n);
    printf("%lf\n", sqrt_iter(n));
    printf("%lf\n", sqrt_rek(1, n));
    //printf("rek = %lf\niter = %lf\n", sqrt_rek(n), sqrt_iter(n));
}
