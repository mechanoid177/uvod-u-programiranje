#include<stdio.h>

main(){
    int s=0, i=0, a;
    while (a!=0){
        printf("Unesite broj: "); scanf("%d", &a);
        i++;
        s+=a;
    }
    printf("Aritmeticka sredina unetog broja je: %f\n", 1.0*s/(i-1));
}
