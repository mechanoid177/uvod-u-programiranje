#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void popuni_mat(int **a, int *n, int *m){
    int i, j;
    for(i = 0; i < *n; i++)
        for(j = 0; j < *m; j++)
            *(*(a + i) + j) = rand() % 100 + 1;
}

void ispisi_mat(int **a, int *n, int *m){
    int i, j;
    for(i = 0; i < *n; i++){
        if(!i) printf("/ ");
        else if(i == *n - 1) printf("\\ ");
        else printf("| ");
        for(j = 0; j < *m; j++)
            printf("%3d ", *(*(a + i) + j));
        if(!i) printf("\\");
        else if(i == *n - 1) printf("/");
        else printf("| ");
        printf("\n");
    }
    printf("\n");
}

void ispisi_niz(int *a, int *n){
    int i;
    printf("[");
    for(i = 0; i < *n; i++)
        printf("%d ", *(a + i));
    printf("]\n");
}

void nizovi_min_max_redova(int **a, int *b, int *c, int *n, int *m){
    int i, j, min, max;
    for(i = 0; i < *n; i++){
        min = max = **(a + i);
        for(j = 0; j < *m; j++){
            if(*(*(a + i) + j) > max) max = *(*(a + i) + j);
            if(*(*(a + i) + j) < min) min = *(*(a + i) + j);
        }
        *(b + i) = max;
        *(c + i) = min;
    }
}

void main(){
    int **a;
    int *b, *c;
    int i, n, m;
    srand(time(0));
    printf("Unesite dimenzije matrice: ");
    scanf("%d%d", &n, &m);
    a = (int**)malloc(n * sizeof(int*));
    for(i = 0; i < n; i++)
        a[i] = (int*)malloc(m * sizeof(int));
    b = (int*)malloc(n * sizeof(int));
    c = (int*)malloc(n * sizeof(int));
    popuni_mat(a, &n, &m);
    ispisi_mat(a, &n, &m);
    nizovi_min_max_redova(a, b, c, &n, &m);
    printf("b = ");
    ispisi_niz(b, &n);
    printf("c = ");
    ispisi_niz(c, &n);
}
