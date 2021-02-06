#include<stdio.h>

main(){
    int s, c;
    printf("Unesite sifru: "); scanf("%d", &s); //zasto drugi tip za sifru
    while((c = getchar()) != EOF){ //ne radi sa \n
        putchar(c ^ s);
    }
}
