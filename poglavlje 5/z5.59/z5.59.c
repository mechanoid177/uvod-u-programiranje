#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void popuni_niz(int *a, int *n){
    int i;
    for(i = 0; i < *n; i++)
        *(a + i) = rand() % 100 + 1;
}

void ispisi_niz(int *a, int *n){
    int i;
    for(i = 0; i < *n; i++)
        printf("%d ", *(a + i));
    printf("\n");
}

void niz_c(int *a, int *b, int *c, int *n){
    int i;
    for(i = 0; i < *n; i++)
        *(c + i) = *(a + i) + *(b + *n - 1 - i);
}

void main(){
    int *a, *b, *c;
    int n;
    srand(time(0));
    printf("Unesite duzinu niza: ");
    scanf("%d", &n);
    a = (int*)malloc(n * sizeof(int));
    b = (int*)malloc(n * sizeof(int));
    c = (int*)malloc(n * sizeof(int));
    popuni_niz(a, &n);
    popuni_niz(b, &n);
    ispisi_niz(a, &n);
    ispisi_niz(b, &n);
    niz_c(a, b, c, &n);
    ispisi_niz(c, &n);
    free(a);
    free(b);
    free(c);
}
