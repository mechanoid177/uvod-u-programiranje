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

int ima(int a, int cif){
    while(a){
        if(cif == a % 10) return 1;
        a /= 10;
    }
    return 0;
}

void main(){
    int C, i, j = 0, n, a[MAX_SIZE], b[MAX_SIZE];
    printf("Unesite cifru: ");
    scanf("%d", &C);
    printf("Unesite duzinu niza: ");
    scanf("%d", &n);
    ucitaj_niz(a, n);
    for(i = 0; i < n; i++){
        if(ima(a[i], C)){
            b[j] = a[i];
            j++;
        }
    }
    printf("C = %d\na = { ", C);
    ispisi_niz(a, n);
    printf("}\nb = { ");
    ispisi_niz(b, j);
    printf("}");
}
