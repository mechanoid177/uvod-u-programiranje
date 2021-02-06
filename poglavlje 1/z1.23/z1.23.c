#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
    int a, b;
    printf("Unesite pocetak intervala: "); scanf("%d", &a);
    printf("Unesite kraj intervala: "); scanf("%d", &b);
    srand(time(0));
    printf("%d\n", rand()%b+1);
}
