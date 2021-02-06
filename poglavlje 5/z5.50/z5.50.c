#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

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
        if(!i) printf("\\");
        else if(i == *n - 1) printf("/");
        else printf("|");
        printf("\n");
    }
    printf("\n");
}

void ispisi_niz(int *b, int *n){
    int i;
    printf("[ ");
    for(i = 0; i < *n; i++)
        printf("%3d ", *(b + i));
    printf("]\n");
}

void swap(int *a, int *b){
    *a -= *b;
    *b += *a;
    *a = *b - *a;
}

void bubble_sort(int *a, int *n){
    int i, j, ponovo;
    do{
        ponovo = 0;
        for(j = 0; j < *n; j++){
            if(*(a + j) > *(a + j + 1)){
                swap(a + j, a + j + 1);
                ponovo = 1;
            }
        }
    }while(ponovo);
}

int prost(int *n){
    int i;
    if(i <= 1) return 1;
    for(i = 2; i < sqrt(*n); i++)
        if(*n % i == 0) return 0;
    return 1;
}

int prosti_elementi(int **a, int *b, int *n, int *m){
    int i, j, k = 0;
    for(i = 0; i < *n; i++)
        for(j = 0; j < *m; j++){
            if(prost(*(a + i) + j)){
                    *(b + k++) = *(*(a + i) + j);
            }
        }
    return k;
}

void main(){
    int **a;
    int *b;
    int i, n, m, k;
    printf("Unesite dimenzije matrice: ");
    scanf("%d%d", &n, &m);
    a = (int**)malloc(n * sizeof(int*));
    for(i = 0; i < n; i++)
        a[i] = (int*)malloc(m * sizeof(int));
    b = (int*)malloc(n * m * sizeof(int));
    popuni_mat(a, &n, &m);
    ispisi_mat(a, &n, &m);
    k = prosti_elementi(a, b, &n, &m);
    ispisi_niz(b, &k);
}
