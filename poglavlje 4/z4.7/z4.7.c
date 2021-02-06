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

int merse(int n){
    return prost(n * 2 - 1);
}

main(){
    int n;
    printf("Unesite broj: ");
    scanf("%d", &n);
    if(!prost(n)){
        printf("Broj nije prost, a samim tim ni Mersenov\n");
        return 0;
    }
    printf("Uneti broj %sje Merseov\n", merse(n) ? "" : "ni");
}
