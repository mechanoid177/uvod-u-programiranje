#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void popuni_mat(int **k, int n){
    int i, j;
    srand(time(0));
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            *(*(k + i) + j) = rand() % 100 + 1;
}

void ispisi_mat(int **c, int n){
    int i, j;
    for(i = 0; i < n; i++){
        if(i == n - 1) printf("\\ ");
        else if(i == 0) printf("/ ");
        else printf("| ");
        for(j = 0; j < n; j++)
            printf("%3d ", *(*(c + i) + j));
        if(i == 0) printf("\\ ");
        else if(i == n - 1) printf("/");
        else printf("| ");
        printf("\n");
    }
    printf("\n");
}

void zbir_elemenata_glavne_dijagonale(int **a, int n){
    int i, s = 0;
    for(i = 0; i < n; i++)
        s += *(*(a + i) + i);
    printf("Zbir elemenata glavne dijagonale: %d\n", s);
}

void zbir_elemenata_sporedne_dijagonale(int **a, int n){
    int i, s = 0;
    for(i = 0; i < n; i++)
        s += *(*(a + i) + n - 1 - i);
    printf("Zbir elemenata sporedne dijagonale: %d\n", s);
}

void zbir_elemenata_iznad_glavne_dijagonale(int **a, int n){
    int i, j, s = 0;
    for(i = 0; i < n - 1; i++)
        for(j = i + 1; j < n; j++)
            s += *(*(a + i) + j);
    printf("Zbir elemenata iznad glavne dijagonale: %d\n", s);
}

void zbir_elemenata_ispod_sporedne_dijagonale(int **a, int n){
    int i, j, s = 0;
    for(i = 1; i < n; i++)
        for(j = n - i; j < n; j++)
            s += *(*(a + i) + j);
    printf("Zbir elemenata ispod sporedne dijagonale: %d\n", s);
}

void main(){
    int **a;
    int n, i;
    printf("Unesite dimezije kvadratne matrice: ");
    scanf("%d", &n);
    a = (int**)malloc(n * sizeof(int*));
    for(i = 0; i < n; i++)
        a[i] = (int*)malloc(n * sizeof(int));
    popuni_mat(a, n);
    ispisi_mat(a, n);
    zbir_elemenata_glavne_dijagonale(a, n);
    zbir_elemenata_sporedne_dijagonale(a, n);
    zbir_elemenata_iznad_glavne_dijagonale(a, n);
    zbir_elemenata_ispod_sporedne_dijagonale(a, n);
}
