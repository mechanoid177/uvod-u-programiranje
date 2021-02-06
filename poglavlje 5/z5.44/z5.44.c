#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void popuni_mat(int **k, int *n, int *m){
    int i, j;
    srand(time(0));
    for(i = 0; i < *n; i++)
        for(j = 0; j < *m; j++)
            *(*(k + i) + j) = rand() % 100 + 1;
}

void ispisi_mat(int **c, int *n, int *m){
    int i, j;
    for(i = 0; i < *n; i++){
        if(i == *n - 1) printf("\\ ");
        else if(i == 0) printf("/ ");
        else printf("| ");
        for(j = 0; j < *m; j++)
            printf("%2d ", *(*(c + i) + j));
        if(i == 0) printf("\\ ");
        else if(i == *n - 1) printf("/");
        else printf("| ");
        printf("\n");
    }
    printf("\n");
}

void min_max_mat(int **a, int *n, int *m){
    int i, j, min, max;
    min = max = **a;
    for(i = 0; i < *n; i++)
        for(j = 0; j < *m; j++){
            if(min > *(*(a + i) + j)) min = *(*(a + i) + j);
            if(max < *(*(a + i) + j)) max = *(*(a + i) + j);
        }
        printf("Min = %d\nMx = %d\n", min, max);
}

void main(){
    int **a;
    int n, m, i;
    printf("Unesite dimenzije matrice: ");
    scanf("%d%d", &n, &m);
    a = (int**)malloc(n * sizeof(int*));
    for(i = 0; i < n; i++)
        a[i] = (int*)malloc(m * sizeof(int));
    popuni_mat(a, &n, &m);
    ispisi_mat(a, &n, &m);
    min_max_mat(a, &n, &m);
}
