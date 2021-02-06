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

int fakt(int n){
    int p = 1;
    if(n == 0) return 1;
    do{
        p *= n;
    }while(--n);
    return p;
}

int vilson(int n){
   if(!prost(n)) return 0;
   return (((fakt(n - 1) + 1) % (n * n)) == 0) ? 1 : 0;
}

main(){
    int n;
    printf("Unesite broj: ");
    scanf("%d", &n);
    printf("Broj %sje Vilsonov\n", vilson(n) ? "" : "ni");
}
