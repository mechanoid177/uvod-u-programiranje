#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void popuni_mat(int **a, int *n, int *m){
    int i, j;
    srand(time(0));
    for(i = 0; i < *n; i++)
        for(j = 0; j < *m; j++)
            *(*(a + i) + j) = rand() % 9 + 1;
}

void ispisi_mat(int **a, int *n, int *m){
    int i, j;
    for(i = 0; i < *n; i++){
        for(j = 0; j < *m; j++)
            printf("%3d", *(*(a + i) + j));
        printf("\n");
    }
    printf("\n");
}

void ispisi_niz(int *a, int *n){
    int i;
    for(i = 0; i < *n; i++)
        printf("%d ", *(a + i));
    printf("\n");
}

void main(){
    int **a;
    int *b;
    int i, j, n, m;
    printf("Unesite dimenzije matrice: ");
    scanf("%d%d", &n, &m);
    a = (int**)malloc(n * sizeof(int*));
    for(i = 0; i < n; i++)
        a[i] = (int*)malloc(m * sizeof(int));
    if(a == NULL) exit(101);
    b = (int*)calloc(n, sizeof(int));
    if(a == NULL) exit(102);
    popuni_mat(a, &n, &m);
    ispisi_mat(a, &n, &m);
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            b[i] += a[i][j];
    ispisi_niz(b, &n);
    free(a);
    free(b);
}
