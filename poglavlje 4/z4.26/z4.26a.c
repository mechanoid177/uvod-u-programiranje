#include<stdio.h>

int pascal(int n, int i){
    if(n == 1 || i == 1 || i == n) return 1;
    return pascal(n - 1, i) + pascal(n - 1, i - 1);
}

main(){
    int i, j, n, k;
    printf("Unesite broj redova: ");
    scanf("%d", &n);
    for(j = 1; j <= n; j++){
        for(k = n - j; k >= 1; k--){
            printf("  ");
        }
        for(i = 1; i <= j; i++){
            printf("%4d", pascal(j, i));
        }
        printf("\n");
    }
}
