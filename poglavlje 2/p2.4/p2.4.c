#include<stdio.h>

main(){
    int a;
    printf("Unesite broj od 1 do 7. ");
    scanf("%d", &a);
    switch(a){
        case 1:
            printf("Ponedeljak\n");
            break;
        case 2:
            printf("Utorak\n");
            break;
        case 3:
            printf("Sreda\n");
            break;
        case 4:
            printf("Cetvrtak\n");
            break;
        case 5:
            printf("Petak\n");
            break;
        case 6:
            printf("Subota\n");
            break;
        case 7:
            printf("Nedelja\n");
            break;
        default:
            printf("Uneta je pogresna vrednost.\n");
    }
    system("pause");
}
