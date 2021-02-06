#include <stdio.h>
#include <math.h>

int fakt(int n){
    int p = 1;
    if(n == 0) return 1;
    do{
        p *= n;
    }while(--n);
    return p;
}

int fabsx(int n){
    return (n < 0) ? -n : n;
}

double bin(int a, int b, int n){
    int k;
    double ost_bin, bi_coef, z, s = 0;
    int b_p = fabsx(b);
    for(k = 0; k <= n; k++){
        z = ((b < 0 && k % 2 == 1) ? -1 : 1);
        s += fakt(n) / (fakt(k) * fakt(n - k)) * pow(a, n - k) * pow(b_p, k) * z;
    }
    return s;
}

main(){
    int n, a, b;
    printf("Unesite sabirke: ");
    scanf("%d%d", &a, &b);
    printf("Unesite stepen binoma: ");
    scanf("%d", &n);
    printf("fakt = %d\n", fakt(n));
    printf("(a + b) ^ n = %.0lf\n", bin(a, b, n));
}
