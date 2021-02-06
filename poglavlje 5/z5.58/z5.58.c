#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void popuni_niz(double *a, int *n){
    int i;
    srand(time(0));
    for(i = 0; i < *n; i++)
        *(a + i) = 1.0 * rand() / 100;
}

void ispisi_niz(double *a, int *n){
    int i;
    for(i = 0; i < *n; i++)
        printf("%lf ", *(a + i));
    printf("\n");
}

void niz_b(double *a, double *b, int *n){
    int i;
    for(i = 0; i < *n; i++){
        *(b + i) = (*(a + i) + *(a + i + 1) + *(a + i + 2)) / 3;
    }
}

void main(){
    double *a, *b;
    int n;
    printf("Unesite duzinu niza: ");
    scanf("%d", &n);
    a = (double*)malloc(n * sizeof(double));
    b = (double*)malloc(n * sizeof(double));
    popuni_niz(a, &n);
    ispisi_niz(a, &n);
    niz_b(a, b, &n);
    ispisi_niz(b, &n);
}
