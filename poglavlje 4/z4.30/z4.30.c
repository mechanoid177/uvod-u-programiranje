#include <stdio.h>

void par_nepar(int n, int* br_p, int* br_n){
    int broj;
    *br_n = *br_p = 0;
    while(n--){
        printf("Unesite broj: ");
        scanf("%d", &broj);
        if(broj % 2 == 0) (*br_p)++;
        else (*br_n)++;
    }
}

main(){
    int n, br_p, br_n;
    printf("Unesite broj brojeva: ");
    scanf("%d", &n);
    par_nepar(n, &br_p, &br_n);
    printf("Broj parnih je %d, a broj neparnih %d\n", br_p, br_n);
}
