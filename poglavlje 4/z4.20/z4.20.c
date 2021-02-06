#include <stdio.h>
#include <math.h>

double sqrt_iter(int i, int n){
    int j;
    double s = sqrt(n);
    for(j = 1; j <= i * 2 - 1; j++){
        s = sqrt(1 + s);
    }
    return s;
}

double sqrt_rek(int i, int n){
    if(i == 0) return sqrt(n);
    return sqrt(1 + sqrt_rek(i - 1, n));
}

main(){
    int i, n;
    printf("Unesite broj ponavljanja: ");
    scanf("%d", &i);
    printf("Unesite broj: ");
    scanf("%d", &n);
    printf("iter = %lf\n", sqrt_iter(i, n));
   //i *= 2;
    printf("rek = %lf\n", sqrt_rek(i, n));
}
