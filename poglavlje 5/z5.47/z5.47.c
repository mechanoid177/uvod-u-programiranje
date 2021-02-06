#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void popuni_mat(int **k, int *n, int *m){
    int i, j;
    for(i = 0; i < *n; i++)
        for(j = 0; j < *m; j++)
            *(*(k + i) + j) = rand() % 100 + 1;
}

void popuni_niz(int *a, int *n){
    int i;
    for(i = 0; i < *n; i++) *(a + i) = rand() % 100 + 1;
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

void ispisi_niz(int *b, int *m){
    int i;
    printf("[ ");
    for(i = 0; i < *m; i++)
        printf("%d ", *(b + i));
    printf(" ]\n");
}

void zamena(int **a, int *b, int *n, int *m){
    int k;
    printf("Unesite koji red je za zamenu: ");
    scanf("%d", &k);
    a[k] = b;
}

void main(){
    int **a;
    int *b;
    int i, n, m, k;
    srand(time(0));
    printf("Unesite dimenzije matrice: ");
    scanf("%d%d", &n, &m);
    a = (int**)malloc(n * sizeof(int*));
    for(i = 0; i < n; i++)
        a[i] = (int*)malloc(m * sizeof(int));
    b = (int*)malloc(m * sizeof(int));
    popuni_mat(a, &n, &m);
    popuni_niz(b, &m);
    ispisi_mat(a, &n, &m);
    ispisi_niz(b, &m);
    zamena(a, b, &n, &m);
    ispisi_mat(a, &n, &m);
}
