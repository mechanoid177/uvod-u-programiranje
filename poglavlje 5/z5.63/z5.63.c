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
            printf("%3d ", *(*(a + i) + j));
        printf("\n");
    }
    printf("\n");
}

int zbir_elemanata_ispod_glavne_dijagonale(int **a, int *n){
    int i, j, s = 0;
    for(i = 1; i < *n; i++)
        for(j = 0; j < i; j++){
            s += *(*(a + i) + j);
        }
    return s;
}

int zbir_elemanata_iznad_sporedne_dijagonale(int **a, int *n){
    int i, j, s = 0;
    for(i = 0; i < *n - 1; i++)
        for(j = 0; j < *n - 1 - i; j++){
            s += *(*(a + i) + j);
        }
    return s;
}

void main(){
    int **a;
    int i, n;
    printf("Unesite dimenzije kvadratne matrice: ");
    scanf("%d", &n);
    a = (int**)malloc(n * sizeof(int*));
    for(i = 0; i < n; i++)
        a[i] = (int*)malloc(n * sizeof(int));
    popuni_mat(a, &n);
    ispisi_mat(a, &n);
    printf("Zbir elemenata ispod dijagonale je: %d\n",
           zbir_elemanata_ispod_glavne_dijagonale(a, &n));
    printf("Zbir elemanta iznad sporedne dijagonale: %d\n",
           zbir_elemanata_iznad_sporedne_dijagonale(a, &n));
    free(a);
}
