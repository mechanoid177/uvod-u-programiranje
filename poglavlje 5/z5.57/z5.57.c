#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ispisi_niz(int *a, int n){
    int i;
    for(i = 0; i < n; i++)
        printf("%d: %d\n", i, *(a + i));
    printf("\n");
}

void main(){
    int *a;
    int n, i;
    a = (int*)malloc(10 * sizeof(int));
    for(i = 0; i < 10; i++)
        a[i] = 0;
    printf("Unesite broj: ");
    scanf("%d", &n);
    while(n){
        a[n % 10]++;
        n /= 10;
    }
    ispisi_niz(a, 10);
}
