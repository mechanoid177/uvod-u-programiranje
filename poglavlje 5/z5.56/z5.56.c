#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void popuni_niz(int *a, int *n){
    int i;
    srand(time(0));
    for(i = 0; i < *n; i++)
        *(a + i) = rand() % 100 + 1;
}

void ispisi_niz(int *a, int *n){
    int i;
    for(i = 0; i < *n; i++)
        printf("%d ", *(a + i));
    printf("\n");
}

void poz_neg(int *a, int *n){
    int i, j = 0, k = 0;
    for(i = 0; i < *n; i++){
        if(*(a + i) < 0) j++;
        else if(*(a + i) > 0) k++;
    }
    printf("Poz ima %d\nNeg ima %d\n", k, j);
}

void main(){
    int *a;
    int n;
    printf("Unesite duzinu niza: ");
    scanf("%d", &n);
    a = (int*)malloc(n * sizeof(int));
    popuni_niz(a, &n);
    ispisi_niz(a, &n);
    poz_neg(a, &n);
}
