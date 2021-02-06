#include<stdio.h>

main(){
    int u;
    printf("Unesite ugao: ");
    scanf("%d", &u);
    u%=360;
    printf("%d\n",u);
    printf("%d\n",u/90);     //odakle da vadim?
    switch(u/90){
        case 0:
            printf("I kvadrant\n");
            break;
        case 1:
            printf("II kvadrant\n");
            break;
        case 2:
            printf("III kvadrant\n");
            break;
        case 3:
            printf("IV kvadrant\n");
            break;
        default:
            printf("pogresan unos\n");
    }
    //system("pause");
}
