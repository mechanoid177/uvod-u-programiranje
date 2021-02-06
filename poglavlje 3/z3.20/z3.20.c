#include<stdio.h>

main(){
    int i, n, s = 1;
    printf("Unesite broj: "); scanf("%d", &n);
    for(i = 1; i <= n; i++){
        s *= i;
        if(s > n){
            printf("%d\n", s);
            break;
        }
    }

}
