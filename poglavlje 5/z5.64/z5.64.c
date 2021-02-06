#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void popuni_mat(int **a, int *n){
    int i, j;
    srand(time(0));
    for(i = 0; i < *n; i++)
        for(j = 0; j < *n; j++)
            *(*(a + i) + j) = rand() % 100 + 1;
}

void ispisi_mat(int **a, int *n){
    int i, j;
    for(i = 0; i < *n; i++){
        for(j = 0; j < *n; j++)
            printf("%3d", *(*(a + i) + j));
        printf("\n");
    }
    printf("\n");
}

int zbir(int **a, int *n, int *k){
    int i, j, s = 0;
    for(i = 0; i < *n; i++)
        for(j = 0; j < *n; j++)
            if(((i + j) == *k) && (*(*(a + i) + j) % 2 != 0))
                s += *(*(a + i) + j);
    return s;
}

void main(){
    int **a;
    int i, n, k;
    printf("Unesite dimenzije matrice: ");
    scanf("%d", &n);
    a = (int**)malloc(n * sizeof(int*));
    for(i = 0; i < n; i++)
        a[i] = (int*)malloc(n * sizeof(int));
    popuni_mat(a, &n);
    ispisi_mat(a, &n);
    printf("Unesite broj: ");
    scanf("%d", &k);
    printf("Zbir je: %d\n", zbir(a, &n, &k));
    free(a);
}
