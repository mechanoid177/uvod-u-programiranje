#include <stdio.h>
#include <math.h>

double sqrt_iter(int n){
    int i;
    double s = 0.0;
    do{
        s = sqrt(1 / pow(10, n) + s);
    }while(--n);
    return s;
}

double sqrt_rek(int i, int n){
    if(n < i) return sqrt(1 / pow(10 , i));
    return sqrt(1 / pow(10, i) + sqrt_rek(i + 1, n - 1));
}

main(){
    int n;
    printf("Unesite dubinu: ");
    scanf("%d", &n);
    printf("iter = %lf\n", sqrt_iter(n));
    printf("rek = %lf\n", sqrt_rek(1, n));
}
