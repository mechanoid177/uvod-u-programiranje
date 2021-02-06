#include<stdio.h>
#include<math.h>

main(){
    int i, b, c, db = 0;
    printf("Unesite 8-bitni binarni broj: "); scanf("%d", &b);
    for(i = 0; i <= 7; i++){
        c = b % 10;
        b /= 10;
        db += c * pow(2, i);
    }
    printf("%d\n", db);
}
