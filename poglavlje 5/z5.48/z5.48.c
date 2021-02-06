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
        if(!i) printf("/ ");
        else if(i == *n - 1) printf("\\ ");
        else printf("| ");
        for(j = 0; j < *m; j++)
            printf("%3d ", *(*(a + i) + j));
        if(!i) printf("\\ ");
        else if(i == *n - 1) printf("/\n");
        else printf("|");
        printf("\n");
    }
}

void zameni_redove(int **a, int *n, int *m, int *k, int *p){
    int *tmp = a[*k];
    a[*k] = a[*p];
    a[*p] = tmp;
}

void main(){
    int **a;
    int i, n, m, k, p;
    a = (int**)malloc(n * sizeof(int*));
    for(i = 0; i < n; i++)
        a[i] = (int*)malloc(m * sizeof(int));
    printf("Unesite dimenzije matrice: ");
    scanf("%d%d", &n, &m);
    printf("Unesite koji redovi menjaju mesta: ");
    scanf("%d%d", &k, &p);
    popuni_mat(a, &n, &m);
    ispisi_mat(a, &n, &m);
    zameni_redove(a, &n, &m, &k, &p);
    ispisi_mat(a, &n, &m);
}
