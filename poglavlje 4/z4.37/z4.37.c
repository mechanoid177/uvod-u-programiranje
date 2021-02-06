#include <stdio.h>
#include <math.h>

double ab(int a, int b, int n){
    int k;
    double s = 0.0;
    for(k = 0; k <= n - 1; k++){
        s += pow(a, n - k - 1) * pow(b, k);
    }
    return s * (a - b);
}

main(){
    int a, b, n;
    printf("Unesite brojeve a i b: ");
    scanf("%d%d", &a, &b);
    printf("Unesite eksponent: ");
    scanf("%d", &n);
    printf("a^n - b^n = %d^%d - %d^%d = %.0lf\n", a, n, b, n, ab(a, b, n));
}
