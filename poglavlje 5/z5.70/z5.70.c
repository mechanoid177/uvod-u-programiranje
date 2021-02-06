#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void popuni_mat(int **a, int *n){
    int i, j;
    srand(time(0));
    for(i = 0; i < *n; i++)
        for(j = 0; j < *n; j++)
            *(*(a + i) + j) = rand() % 100 + 1;
}

void ispisi_mat(int **a, int *n){
    int i, j;
    for(i = 0; i < *n; i++){
        for(j = 0; j < *n; j++)
            printf("%3d", *(*(a + i) + j));
        printf("\n");
    }
    printf("\n");
}

void swap(int *a, int *b){
    *a -= *b;
    *b += *a;
    *a = *b - *a;
}

void sort(int *a, int *n){
    int i, ponovo;
    do{
        ponovo = 0;
        for(i = 0; i < *n; i++){
            if(*(a + i) > *(a + i + 1)){
                swap(a + i, a + i + 1);
                ponovo = 1;
            }
        }
    }while(ponovo);
}

void ispisi_niz(int *a, int *n){
    int i;
    for(i = 0; i < *n; i++)
        printf("%d ", *(a + i));
    printf("\n");
}

void main(){
    int **a;
    int *b;
    int i, j, n;
    printf("Unesite dimenzije matrice: ");
    scanf("%d", &n);
    a = (int**)malloc(n * sizeof(int*));
    for(i = 0; i < n; i++)
        a[i] = (int*)malloc(n * sizeof(int));
    if(a == NULL) exit(101);
    b = (int*)malloc(n * sizeof(int));
    if(a == NULL) exit(102);
    popuni_mat(a, &n);
    ispisi_mat(a, &n);
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            if((i + j) == (n - 1)) b[i] = a[i][j];
    sort(b, &n);
    ispisi_niz(b, &n);
    free(a);
    free(b);
}
