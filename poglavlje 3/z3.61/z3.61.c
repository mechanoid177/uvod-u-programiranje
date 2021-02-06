#include<stdio.h>

main(){
    int i, n, a, b;
    double d1, d2;
    d1 = d2 = 1;
    printf("Unesite broj clanova: "); scanf("%d", &n);
    for(i = 1; i <= n; i++){
        scanf("%d", &a);
        if(i == 1){
            b = a;
            continue;
        }
        else{
            d1 = 1.0 * a / b;
            if(d1 != d2 && i != 2){
                printf("Nije\n");
                break;
            }
            b = a;
            d2 = d1;
            if(i == n) printf("Jeste\n");
        }
    }
}
