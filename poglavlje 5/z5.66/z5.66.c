#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
    int **a;
    int i, j, n;
    printf("Unesite dimeziju matrice: ");
    scanf("%d", &n);
    a = (int**)malloc(n * sizeof(int*));
    for(i = 0; i < n; i++)
        a[i] = (int*)malloc(n * sizeof(int));
    if(a == NULL){
        exit(101);
    }
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++){
            if(j + i >= n) *(*(a + i) + j) = i + j - n + 1;
            else a[i][j] = i + j + 1;
        }
    ispisi_mat(a, &n);
    free(a);
}
