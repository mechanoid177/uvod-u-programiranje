#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void popuni_mat(int **a, int *n){
    int i, j;
    for(i = 0; i < *n; i++)
        for(j = 0; j < *n; j++)
            *(*(a + i) + j) = rand() % 100 + 1;
}

void ispisi_mat(int **a, int *n){
    int i, j;
    for(i = 0; i < *n; i++){
        if(!i) printf("/ ");
        else if(i == *n - 1) printf("\\ ");
        else printf("| ");
        for(j = 0; j < *n; j++)
            printf("%3d ", *(*(a + i) + j));
        if(!i) printf("\\ ");
        else if(i == *n - 1) printf("/");
        else printf("| ");
        printf("\n");
    }
    printf("\n");
}

void ispisi_niz(int *b, int *n){
    int i;
    printf("[ ");
    for(i = 0; i < *n; i++)
        printf("%d ", *(b + i));
    printf("]\n");
}

void proizvod_kolona(int **a, int *b, int *n){
    int i, j, k;
    for(i = 0; i < *n; i ++){
        k = 1;
        for(j = 0; j < *n; j++)
            k *= *(*(a + j) + i);
        *(b + i) = k;
    }
}

void main(){
    int **a;
    int *b;
    int i, n;
    printf("Unesite dimenzije kvadratne matrice: ");
    scanf("%d", &n);
    a = (int**)malloc(n * sizeof(int*));
    for(i = 0; i < n; i++)
        a[i] = (int*)malloc(n * sizeof(int));
    b = (int*)malloc(n * sizeof(int));
    popuni_mat(a, &n);
    ispisi_mat(a, &n);
    proizvod_kolona(a, b, &n);
    ispisi_niz(b, &n);
}
