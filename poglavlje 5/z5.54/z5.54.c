#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void popuni_niz(double *a, int *n){
    int i;
    for(i = 0; i < *n; i++)
        *(a + i) = 1.0 * rand() / 100;
}

void ispisi_niz(double *a, int *n){
    int i;
    for(i = 0; i < *n; i++)
        printf("%lf ", *(a + i));
    printf("\n");
}

double lagranz(double *x, double *f_x, double *xt, int *n){
    double s = 0.0, p = 1.0;
    int i, j;
    for(i = 0; i < *n; i++){
        for(j = 0; j < *n; j++){
            if(i == j) continue;
            p *= (*xt - *(x + j)) / (*(x + i) - *(x + j));
        }
        s += p * *(f_x + i);
    }
    return s;
}

void main(){
    double *f_x, *x;
    double xt, Xt;
    int n;
    printf("Unesite broj cvorova: ");
    scanf("%d", &n);
    printf("Unesite tacku: ");
    scanf("%lf", &xt);
    f_x = (double*)malloc(n * sizeof(double));
    x = (double*)malloc(n * sizeof(double));
    popuni_niz(x, &n);
    popuni_niz(f_x, &n);
    ispisi_niz(x, &n);
    ispisi_niz(f_x, &n);
    Xt = lagranz(x, f_x, &xt, &n);
    printf("Xt = %lf\n", Xt);
}
