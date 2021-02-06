#include <stdio.h>
#include <time.h>
#include <stdlib.h>

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

void sort(int *a, int n){
    int i, tmp, ponovo;
    do{
        ponovo = 0;
        for(i = 0; i < n; i++){
            if(*(a + i) > *(a + i + 1)){
                tmp = *(a + i);
                *(a + i) = *(a + i + 1);
                *(a + i + 1) = tmp;
                ponovo = 1;
            }
        }
    }while(ponovo);
}

void ubaci(int *a, int n, int r){
    int i, j;
    for(i = n; i >= 0; i--){
        if(r < a[i]){
            a[i + 1] = a[i];
        }else break;
    }
    a[i + 1] = r;
}

void main(){
    int n, a[MAX_SIZE], r, j, i;
    printf("Unesite duzinu niza: ");
    scanf("%d", &n);
    pop_niz(a, n);
    sort(a, n);
    ispisi_niz(a, n);
    printf("\n");
    printf("Unesite broj: ");
    scanf("%d", &r);
    ubaci(a, n, r);
    ispisi_niz(a, n + 1);
}
