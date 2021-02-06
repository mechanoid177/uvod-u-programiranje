#include <stdio.h>

#define MAX_SIZE 100

void ucitaj_niz(int *a, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("Unesite %d. element niza: ", i + 1);
        scanf("%d", (a + i));
    }
}

void ispisi_niz(double *a, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%lf ", *(a + i));
    }
}

double prosek(int a[], int n, int j){
    int i, s = 0;
    for(i = 0; i < n; i++){
        if(i == j) continue;
        s += a[i];
    }
    return (double)s / (n - 1);
}

void main(){
    int i, n, a[MAX_SIZE];
    double s[MAX_SIZE];
    printf("Unesite duzinu niza: ");
    scanf("%d", &n);
    ucitaj_niz(a, n);
    for(i = 0; i < n; i++){
        s[i] = prosek(a, n, i);
    }
    printf("s = { ");
    ispisi_niz(s, n);
    printf("}");
}
