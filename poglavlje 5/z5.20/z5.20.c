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

void bubble_sort(int a[], int n){
    int i, tmp, pon = 1;
    while(pon){
        pon = 0;
        for(i = 1; i < n; i++){
            if(a[i] < a[i - 1]){
                tmp = a[i];
                a[i] = a[i - 1];
                a[i - 1] = tmp;
                pon = 1;
            }
        }
    }
    ispisi_niz(a, n);
}

void main(){
    int n, a[MAX_SIZE];
    printf("Unesite dimenziju niza: ");
    scanf("%d", &n);
    ucitaj_niz(a, n);
    bubble_sort(a, n);
}
