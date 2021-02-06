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

void zamena(int *a, int *n, int *k){
    int j, i;
    for(i = 0; i < *n; i++){
        if(*k == *(a + i)){
            for(j = i; j < *n; j++){
                *(a + j) = *(a + j + 1);
            }
            *n = *n - 1;
        }
    }
}

void main(){
    int *a;
    int n, k;
    printf("Unesite duzinu niza: ");
    scanf("%d", &n);
    a = (int*)malloc(n * sizeof(int));
    popuni_niz(a, &n);
    ispisi_niz(a, &n);
    printf("Unesite broj: ");
    scanf("%d", &k);
    zamena(a, &n, &k);
    ispisi_niz(a, &n);
}
