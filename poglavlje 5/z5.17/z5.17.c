#include <stdio.h>
#include <math.h>

#define MAX_SIZE 100

void ucitaj_niz(int *a, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("Unesite a[%d] koeficijent: ", i);
        scanf("%d", (a + i));
    }
}

void main(){
    int x, n, a[MAX_SIZE], i, xi = 1;
    double p = 0.0;
    printf("Unesite stepen polinoma: ");
    scanf("%d", &n);
    ucitaj_niz(a, n + 1);
    printf("Unesite vrednost za x: ");
    scanf("%d", &x);
    for(i = 0; i < n + 1; i++){
        p += a[i] * pow(x, i);
    }
    printf("Polinom je: %lf\n", p);
    //efikasnije
    p = 0;
    for(i = 0; i < n + 1; i++){
        p += a[i] * xi;
        xi *= x;
    }
    printf("Polinom je: %lf\n", p);
    //najefikasnije hornerova sema
    p = 0;
    for(i = n; i >= 0; i--){
        p = p * x + a[i];
    }
    printf("Polinom je: %lf\n", p);
}
