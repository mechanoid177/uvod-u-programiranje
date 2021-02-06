#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void popuni_mat(int **k, int n, int m){
    int i, j;
    srand(time(0));
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            *(*(k + i) + j) = rand() % 100 + 1;
}

void ispisi_mat(int **c, int n, int m){
    int i, j;
    for(i = 0; i < n; i++){
        if(i == n - 1) printf("\\ ");
        else if(i == 0) printf("/ ");
        else printf("| ");
        for(j = 0; j < m; j++)
            printf("%3d ", *(*(c + i) + j));
        if(i == 0) printf("\\ ");
        else if(i == n - 1) printf("/");
        else printf("| ");
        printf("\n");
    }
    printf("\n");
}

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void transp(int **a, int n, int m, int dim){
    int i, j;
    for(i = 0; i < dim; i++)
        for(j = i; j < dim; j++){
            swap(*(a + i) + j, *(a + j) + i);
        }
}

void main(){
    int **a;
    int n, m, i, dim;
    printf("Uneiste dimenzije matrice: ");
    scanf("%d%d", &n, &m);
    printf("n = %d, m = %d\n", n, m);
    if(n > m) dim = n;
    else dim = m;
    a = (int**)malloc(dim * sizeof(int*));
    for(i = 0; i < dim; i++)
        a[i] = (int*)malloc(dim * sizeof(int));
    popuni_mat(a, n, m);
    ispisi_mat(a, n, m);
    transp(a, n, m, dim);
    ispisi_mat(a, m, n);
}
