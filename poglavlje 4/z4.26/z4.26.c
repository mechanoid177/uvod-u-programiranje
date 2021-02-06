#include <stdio.h>

int fakt(int n){
    int p = 1;
    if(n == 0) return 1;
    do{
        p *= n;
    }while(--n);
    return p;
}

void pas_tro(int n){
    int i, j, bi_koef, k;
    for(i = 0; i < n; i++){
        for(j = n - i; j > 1; j--){
            printf(" ");
        }
        for(k = 0; k <= i; k++){
            bi_koef = fakt(i) / (fakt(k) * fakt(i - k));
            printf("%d ", bi_koef);
        }
        printf("\n");
    }
}

main(){
    int n;
    printf("Unesite broj redova: ");
    scanf("%d", &n);
    pas_tro(n);

}
