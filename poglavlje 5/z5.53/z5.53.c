#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void spiral_mat(int **a, int *n){
    int i, j;
    for(i = 0; i < *n; i++){
        for(j = 0; j < *n; j++)
    }

}

void ispisi_mat(int **a, int *n){
    int i, j;
    for(i = 0; i < *n; i++){
        if(!i) printf("/ ");
        else if(i == *n - 1) printf("\\ ");
        else printf("| ");
        for(j = 0; j < *n; j++)
            printf("%3d ", *(*(a + i) + j));
        if(!i) printf("\\ ");
        else if(i == *n - 1) printf("/");
        else printf("|");
        printf("\n");
    }
    printf("\n");
}

void main(){
    int **a;
    int i, n;
    printf("Unesite dimenzije matrice: ");
    scanf("%d", &n);
    a = (int**)malloc(n * sizeof(int*));
    for(i = 0; i < n; i++)
        a[i] = (int*)malloc(n * sizeof(int));
    spiral_mat(a, &n);
    ispisi_mat(a, &n);
}
