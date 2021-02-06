#include <stdio.h>

int bin(int n){
   if(n == 0) return 0;
   return n % 2 + 10 * bin(n / 2);
}

main(){
    int n;
    printf("Unesite broj: ");
    scanf("%d", &n);
    printf("%d\n", bin(n));
}
