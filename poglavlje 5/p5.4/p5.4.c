#include <stdio.h>

#define MAX_SIZE 100

void ucitaj_mat(int mat[][MAX_SIZE], int n, int m){
    int j, i;
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("Unesite element sa indeksima %d i %d: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
}

void ispisi_mat(int mat[][MAX_SIZE], int n, int m){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
main(){
    int n, m, mat[MAX_SIZE][MAX_SIZE];
    printf("Unesite dimenzije matrice: ");
    scanf("%d%d", &n, &m);
    ucitaj_mat(mat, n, m);
    ispisi_mat(mat, n, m);
}
