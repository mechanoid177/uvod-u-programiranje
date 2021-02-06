#include<stdio.h>

main(){
    int o;
    printf("Unesite ocenu: ");
    scanf("%d", &o);
    switch(o){
        case 1:
            printf("Nedovoljan\n");
            break;
        case 2:
            printf("Dovoljan\n");
            break;
        case 3:
            printf("Dobar\n");
            break;
        case 4:
            printf("Vrlo dobar\n");
            break;
        case 5:
            printf("Odlican\n");
            break;
        default:
            printf("Pogresan unos\n");
    }
    system("pause");
}
