#include<stdio.h>

main(){
    int g;
    printf("Unesite godinu: ");
    scanf("%d", &g);
    if((g%4==0 && g%100!=0) || g%400==0)
        printf("Prestupna.\n");
    else printf("Prosta\n");
    system("pause");
}
