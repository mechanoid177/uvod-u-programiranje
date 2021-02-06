#include <stdio.h>

main(){
    int g;
    printf("Unesite godinu: ");
    scanf("%d", &g);
    if((g%4==0 && g%100!=0) || (g%4==0 && g%100==0 && (g/100%9==2 || g/100%9==6)))
        printf("Godina je prestupna\n");
    else
        printf("Godina je prosta\n");
    system("pause");
}
