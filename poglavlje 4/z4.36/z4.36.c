#include <stdio.h>
#include <math.h>

int prost(int n){
    int i;
    if(n <= 1) return 0;
    for(i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int superprost(int n){
    if(!prost(n)) return 0;
    while(n > 10){
        n /= 10;
        if(!prost(n)) return 0;
    }
    return 1;
}

main(){
    int n;
    printf("Unesite broj: ");
    scanf("%d", &n);
    printf("Broj %sje superprost\n", superprost(n) ? "" : "ni");
}
