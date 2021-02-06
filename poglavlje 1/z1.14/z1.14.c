#include<stdio.h>

main(){
    int cf1, cf2, cf3, cf4, br;
    printf("Unesite cetvorocifren broj: ");
    scanf("%d", &br);
    cf1=br/1000;
    cf2=(br/100)%10;
    cf3=br/10%10;
    cf4=br%10;
    printf("Proizvod cifara: %d\n", cf1*cf2*cf3*cf4);
    system("pause");
}
