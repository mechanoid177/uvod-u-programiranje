#include<stdio.h>

main(){
    int in;
    printf("Unesite vremenski interval dat u minutima: ");
    scanf("%d", &in);
    printf("%d:%d:%s\n", in/60, in%60, "0");
    system("pause");
}
