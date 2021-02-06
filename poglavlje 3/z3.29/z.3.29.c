#include<stdio.h>

main(){
    int n, a1, a = 0, b, d, i;
    printf("Unesite broj clanova niza: "); scanf("%d", &n);
    if(n < 2){
        printf("Nema dovoljno elemenata\n");
        return 1;
    }
    printf("Unesite 1. clan niza: "); scanf("%d", &a1);
    for(i = 2; i <= n; i++){
        b = a;
        printf("Unestie %d. clan niza: ", i);
        scanf("%d", &a);
        if(i == 2){
            d = a - a1;
            continue;
        }
        if((a - b) != d){
            printf("Uneti niz nije aritmeticki\n");
            break;
        }
        if(i == n) printf("Uneti niz jeste aritmeticki\n");
    }

}
