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

int proizvod(int *a, int *n){
    int i, p = 1;
    for(i = 0; i < *n; i++)
        p *= *(a + i);
    return p;
}

void main(){
    int *a;
    int n;
    a = (int*)malloc(n * sizeof(int));
    printf("Unesite duzinu niza: ");
    scanf("%d", &n);
    popuni_niz(a, &n);
    ispisi_niz(a, &n);
    printf("Pro = %d\n", proizvod(a, &n));
}
