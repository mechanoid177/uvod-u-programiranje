#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void popuni_mat(int **a, int *n, int *m){
    int i, j;
    srand(time(0));
    for(i = 0; i < *n; i++)
        for(j = 0; j < *m; j++)
            *(*(a + i) + j) = rand() % 3;
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

void pos_ele(int **a, int *n, int *m){
    int i, j, k, g = 0, max, h;
    for(i = 0; i < *n; i++){
        max = **(a + i);
        for(j = 0; j < *m; j++){
            if(*(*(a + i) + j) >= max){
                max = *(*(a + i) + j);
                k = j;
            }
        }
        for(h = 0; h < *n; h++){
            if(*(*(a + i) + k) > *(*(a + h) + k)){
                break;
            }
        }
        if(*(*(a + i) + k) > *(*(a + h) + k)){
            continue;
        }
        printf("[%d][%d]\n", i, k);
        g++;
    }
    printf("g = %d\n", g);
}

void main(){
    int **a;
    int i, n, m;
    printf("Unesite dimenzije niza: ");
    scanf("%d%d", &n, &m);
    a = (int**)malloc(n * sizeof(int*));
    for(i = 0; i < n; i++)
        a[i] = (int*)malloc(m * sizeof(int));
    popuni_mat(a, &n, &m);
    ispisi_mat(a, &n, &m);
    pos_ele(a, &n, &m);
    free(a);
}

