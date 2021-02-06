#include <stdio.h>

main(){
    int n, i, cifre[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    printf("Unesite broj: ");
    scanf("%d", &n);
    while(n){
        cifre[n % 10]++;
        n /= 10;
    }
    for(i = 0; i < 10; i++){
        printf("Cifra %d se ponavlja %d puta.\n", i, cifre[i]);
    }
}
