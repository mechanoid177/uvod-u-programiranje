#include <stdio.h>

main(){
    int m;
    char o;
    printf("Unesite redni broj meseca: ");
    scanf("%d", &m);
    switch(m){
        case 2:
            printf("Da li je godina prestupna (d/n): ");
            fflush(stdin);
            scanf("%c", &o);
            if(o!='d' && o!='n')
                printf("Pogresan odgovor na pitanje\n");
            else
                printf("Mesec ima %d dana\n", o=='d' ? 29 : 28);
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Mesec ima 31 dan\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Mesec ima 30 dana\n");
            break;
        default:
            printf("Unet pogresan mesec\n");

    }
    system("pause");
}

