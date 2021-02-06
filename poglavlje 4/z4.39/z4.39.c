#include <stdio.h>
#include <math.h>

double sqrt_iter(int n){
    int i;
    double s = 0.0;
    for(i = n * 2; i >= 1; i -= 2){
        s = sqrt(1.0 / i + s);
    }
    return s;
}

double sqrt_rek(int i, int n){
    if(n == 0) return 0;
    return sqrt(1.0 / i + sqrt_rek(i + 2, n - 1));
}

main(){
    int n;
    printf("Unesite dubinu: ");
    scanf("%d", &n);
    printf("iter = %lf\n", sqrt_iter(n));
    printf("rek = %lf\n", sqrt_rek(2, n));
}
