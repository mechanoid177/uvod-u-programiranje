#include <stdio.h>

#define MAX_SIZE 100

void ispisi_mat(int mat[][MAX_SIZE], int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

main(){
    int n, mat[MAX_SIZE][MAX_SIZE], i, j;
    printf("Unesite dimenziju matrice: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i == j) mat[i][j] = 1;
            else if(i < j) mat[i][j] = 2;
            else mat[i][j] = 3;
        }
    ispisi_mat(mat, n);
    printf("-----------\n");
    }
    ispisi_mat(mat, n);
}
