#include <stdio.h>

#define MAX_SIZE 100

void ucitaj_niz(int *a, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("Unesite %d. clan: ", i + 1);
        scanf("%d", a + i);
    }
}

void ispisi_niz(int *a, int n){
    int i;
    for(i = 0; i < n; i++) printf("%d ", *(a + i));
}

void selection_sort(int a[], int n){
    int i, j, tmp;
    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    ispisi_niz(a, n);
}

void main(){
    int n, a[MAX_SIZE];
    printf("Unesite broj clanova: ");
    scanf("%d", &n);
    ucitaj_niz(a, n);
    selection_sort(a, n);
}
