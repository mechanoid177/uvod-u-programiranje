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
            printf("%3d ", *(*(a + i) + j));
        printf("\n");
    }
    printf("\n");
}

void swap(int *a, int *b){
    *a -= *b;
    *b += *a;
    *a = *b - *a;
}

void sort(int **a, int *n, int *m){
    int i, j, ponovo;
    for(i = 0; i < *n; i++){
        do{
            ponovo = 0;
            for(j = 0; j < *m; j++){
                if((i % 2 == 0) && (*(*(a + i) + j) > *(*(a + i) + j + 1))){
                    swap(*(a + i) + j, *(a + i) + j + 1);
                    ponovo = 1;
                }
                else if((i % 2 == 1) && (*(*(a + i) + j) < *(*(a + i) + j + 1))){
                    if(j == *m - 1) continue;
                    swap(*(a + i) + j, *(a + i) + j + 1);
                    ponovo = 1;
                }
            }
        }while(ponovo);
    }
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
    sort(a, &n, &m);
    ispisi_mat(a, &n, &m);
    free(a);
}
