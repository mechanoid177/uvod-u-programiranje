#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void popuni_mat(int **a, int n){
    int i, j;
    srand(time(0));
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            *(*(a + i) + j) = rand() % 100 + 1;
}

void ispisi_mat(int **a, int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++)
            printf("%d ", *(*(a + i) + j));
        printf("\n");
    }
}

int zbir_ele(int **a, int n){
    int i, j, s = 0;
        for(i = 0; i < n; i++)
            for(j = 0; j < n; j++)
                s += *(*(a + i) + j);
    return s;
}

void main(){
    int **a;
    int n, i;
    printf("Unesite dimezniju kvadratne matrice: ");
    scanf("%d", &n);
    a = (int**)malloc(n * sizeof(int*));
    for(i = 0; i < n; i++)
        a[i] = (int*)malloc(n * sizeof(int));
    popuni_mat(a, n);
    ispisi_mat(a, n);
    printf("Zbir elemanta matrice je: %d\n", zbir_ele(a, n));
}
