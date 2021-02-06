#include <stdio.h>

#define MAX_SIZE 100

void ucitaj_niz(int *a, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("Unesite %d. element niza: ", i + 1);
        scanf("%d", a + i);
    }
}

void ispisi_niz(int *a, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", *(a + i));
    }
}

void main(){
    int i, d, n, a[MAX_SIZE], b[MAX_SIZE];
    printf("Unesite duzinu niza: ");
    scanf("%d", &d);
    printf("Unesite pomeranje: ");
    scanf("%d", &n);
    ucitaj_niz(a, d);
    for(i = 0; i < d; i++){
        b[(i + n) % d] = a[i];
    }
    printf("a = { ");
    ispisi_niz(a, d);
    printf("}\nb = { ");
    ispisi_niz(b, d);
    printf("}");
}
