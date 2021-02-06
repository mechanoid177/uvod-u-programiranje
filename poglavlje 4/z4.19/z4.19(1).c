#include <stdio.h>
#include <math.h>

double sqrt_iter(int n){
    int i, j;
    double s = 0;
    for(i = 1; i <= n; i++){
        for(j = 3; j >= 1; j--){
            s = sqrt(j + s);
        }
    }
    return s;
}

double sqrt_rek(int i, int n){
    if(i > n) return 0;
    return sqrt((i - 1) % 3 + 1 + sqrt_rek(i + 1, n));
}

main(){
    int n;
    printf("Unesite broj ponavljanja: ");
    scanf("%d", &n);
    printf("iter = %lf\n", sqrt_iter(n));
    printf("rek = %lf\n", sqrt_rek(n, n));
}
