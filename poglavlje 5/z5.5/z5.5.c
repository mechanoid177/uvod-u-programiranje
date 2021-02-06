#include <stdio.h>

#define MAX_SIZE 100

void ucitaj_niz(int *a, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("Unesite %d. element niza: ", i + 1);
        scanf("%d", (a + i));
    }
}

void ispisi_niz(double a[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%lf ", a[i]);
    }
}

void main(){
    int i, n, a[MAX_SIZE];
    double b[MAX_SIZE];
    printf("Unesite duzinu niza: ");
    scanf("%d", &n);
    ucitaj_niz(a, n);
    for(i = 0; i < n; i++){
        b[i] = (double)a[i] / a[i + 1];
    }
    printf("b = { ");
    ispisi_niz(b, n - 1);
    printf("}");
}
