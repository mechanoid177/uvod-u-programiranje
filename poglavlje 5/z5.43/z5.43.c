#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void popuni_mat(int **k, int *n){
    int i, j;
    srand(time(0));
    for(i = 0; i < *n; i++)
        for(j = 0; j < *n; j++)
            *(*(k + i) + j) = rand() % 100 + 1;
}

void ispisi_mat(int **c, int *n){
    int i, j;
    for(i = 0; i < *n; i++){
        if(i == *n - 1) printf("\\ ");
        else if(i == 0) printf("/ ");
        else printf("| ");
        for(j = 0; j < *n; j++)
            printf("%3d ", *(*(c + i) + j));
        if(i == 0) printf("\\ ");
        else if(i == *n - 1) printf("/");
        else printf("| ");
        printf("\n");
    }
    printf("\n");
}

void funk(int **a, int *n){
    int i, j;
    for(i = 0; i < *n; i++)
        for(j = 0; j < *n; j++)
            if(!((i == j) || ((i + j) == (*n - 1))))
                *(*(a + i) + j) = 0;
}

void main(){
    int **a;
    int n, i;
    printf("Unesite dimenzije kvadratne matrice: ");
    scanf("%d", &n);
    a = (int**)malloc(n * sizeof(int*));
    for(i = 0; i < n; i++)
        a[i] = (int*)malloc(n * sizeof(int));
    popuni_mat(a, &n);
    ispisi_mat(a, &n);
    funk(a, &n);
    ispisi_mat(a, &n);
}
