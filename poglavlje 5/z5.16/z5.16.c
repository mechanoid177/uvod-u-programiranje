#include <stdio.h>

#define MAX_SIZE 100

void ucitaj_niz(int *a, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("Unesite %d. clan: ", i + 1);
        scanf("%d", a + i);
    }
}

void pro(int *a, int i1, int i2){
    int i, p = 1;
    for(i = i1 + 1; i < i2; i++){
        p *= *(a + i);
    }
    printf("Proizvod: %d\n", p);
}

void main(){
    int i, a[MAX_SIZE], n, x, y, xi = -1, yi = -1;
    printf("Unesite broj clanova: ");
    scanf("%d", &n);
    ucitaj_niz(a, n);
    printf("Unesite x i y: ");
    scanf("%d%d", &x, &y);
    for(i = 0; i < n; i++){
        if(a[i] == x && xi < 0) xi = i;
        if(a[i] == y && yi < 0) yi = i;
    }
    pro(a, xi, yi);
}
