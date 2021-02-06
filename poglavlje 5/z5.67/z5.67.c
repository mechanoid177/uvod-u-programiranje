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

void main(){
    int **a, **b;
    int i, j, n;
    printf("Uneiste dimenzije matrice: ");
    scanf("%d", &n);
    a = (int**)malloc(n * sizeof(int*));
    for(i = 0; i < n; i++)
        a[i] = (int*)malloc(n * sizeof(int));
    if(a == NULL) exit(101);
    b = (int**)malloc(n * sizeof(int*));
    for(i = 0; i < n; i++)
        b[i] = (int*)malloc(n * sizeof(int));
    if(b == NULL) exit(102);
    popuni_mat(a, &n);
    ispisi_mat(a, &n);
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            b[i][j] = a[i][n - j - 1];
    ispisi_mat(b, &n);
    free(a);
    free(b);
}
