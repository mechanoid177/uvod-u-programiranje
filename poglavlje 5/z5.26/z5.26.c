#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 100

void pop_niz(int *a, int n){
    int i;
    srand(time(0));
    for(i = 0; i < n; i++){
        a[i] = rand() % 100 + 1;
    }
}

void ispisi_niz(int *a, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", *(a + i));
    }
}

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort_par_nepar(int *a, int n){
    int i;
    for(i = 0; i < n; i += 2){
        if(*(a + i) > *(a + i + 2)) swap(a + i, a + i + 2);
    }
    for(i = 1; i < n; i += 2){
        if(*(a + i) > *(a + i + 2)) swap(a + i, a + i + 2);
    }
}

void main(){
    int n;
    int *a;
    printf("Unesite broj clanova niza: ");
    scanf("%d", &n);
    a = (int*)malloc(n * sizeof(int));
    if(a == NULL){
        printf("Greska\n");
        exit(101);
    }
    pop_niz(a, n);
    ispisi_niz(a, n);
    printf("\n");
    sort_par_nepar(a, n);
    ispisi_niz(a, n);
}
