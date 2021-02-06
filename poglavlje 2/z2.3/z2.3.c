#include<stdio.h>

main(){
    int n;
    printf("Unesite broj: ");
    scanf("%d", &n);
    if(n<0)
        printf("Greska\n");
    else
        printf("Kvadrati koren od %d je %f\n", n, sqrt(n));
    system("pause");
}
