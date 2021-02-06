#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void popuni_niz(int *a, int n){
    int i;
    srand(time(0));
    for(i = 0; i < n; i++) *(a + i) = rand() % 100 + 1;
}

void ispisi_niz(int *a, int n){
    int i;
    for(i = 0; i < n; i++) printf("%d ", *(a + i));
}

void min_max(int *a, int n){
    int i, min, max;
    min = max = *a;
    for(i = 0; i < n; i++){
        if(min > *(a + i)) min = *(a + i);
        if(max < *(a + i)) max = *(a + i);
    }
    printf("Min = %d\nMax = %d\n", min, max);
}

void main(){
    int *a;
    int n;
    printf("Unesite duzinu niza: ");
    scanf("%d", &n);
    a = (int*)malloc(n * sizeof(int));
    if(a == NULL){
        printf("Greska!!!\n");
        exit(101);
    }
    popuni_niz(a, n);
    ispisi_niz(a, n);
    printf("\n");
    min_max(a, n);
}
