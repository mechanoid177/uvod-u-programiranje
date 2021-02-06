#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void popuni_mat(int **a, int *n, int *m){
    int i, j;
    srand(time(0));
    for(i = 0; i < *n; i++)
        for(j = 0; j < *m; j++)
            *(*(a + i) + j) = rand() % 100 + 1;
}

void ispisi_mat(int **a, int *n, int *m){
    int i, j;
    for(i = 0; i < *n; i++){
        for(j = 0; j < *m; j++)
            printf("%3d ", *(*(a + i) + j));
        printf("\n");
    }
    printf("\n");
}

int proizvod(int **a, int *n, int *m){
    int i, j, p = 1;
    for(i = 0; i < *n; i++)
        for(j = 0; j < *m; j++)
            p *= *(*(a + i) + j);
    return p;
}

void main(){
    int **a;
    int i, n, m;
    printf("Unesite dimenzije matrice: ");
    scanf("%d%d", &n, &m);
    a = (int**)malloc(n * sizeof(int*));
    for(i = 0; i < n; i++)
        a[i] = (int*)malloc(m * sizeof(int));
    popuni_mat(a, &n, &m);
    ispisi_mat(a, &n, &m);
    printf("Proizvod je: %d\n", proizvod(a, &n, &m));
    free(a);
}
