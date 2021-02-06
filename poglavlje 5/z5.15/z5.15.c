#include <stdio.h>

#define MAX_SIZE 100

double ucitaj_niz(double *a, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("Unesite %d. element: ", i + 1);
        scanf("%lf", (a + i));
    }
}

void main(){
    int i, n;
    double a[MAX_SIZE], p, s = 0.0;
    printf("Unesite broj elemenata: ");
    scanf("%d", &n);
    ucitaj_niz(a, n);
    printf("Unesite realan broj: ");
    scanf("%lf", &p);
    for(i = 0; i < n; i++){
        if(a[i] == p) break;
        s += a[i];
        printf("%f\n", s);
    }
    printf("Suma: %lf\n", s);
}
