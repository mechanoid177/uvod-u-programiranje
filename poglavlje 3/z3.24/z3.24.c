#include<stdio.h>

main(){
    int i, j, n, z, k;
    char a;
    while(1){
        printf("Unesite broj zadatka(23, 24, 25, 26, 27 i 28): "); scanf("%d", &z);
        printf("Unesite broj: "); scanf("%d", &n);
        switch(z){
            case(23):
                for(i = 1; i <= n; i++){
                    for(j = 1; j <= i; j++)
                        printf("*");
                    printf("\n");
                }
                break;
            case(24):
                for(i = 1; i <= n; i++){
                    for(j = 1; j <= (n - i); j++)
                        printf(" ");
                    for(k = 1; k <= i; k++)
                        printf("*");
                    printf("\n");
                }
                break;
            case(25):
                for(i = 1; i <= n; i++){
                    for(j = 1; j <= (n - i) * 2; j++)
                        printf(" ");
                    for(k = 1; k < (i * 2)  ; k++)
                        printf("* ");
                    printf("\n");
                }
                break;
            case(26):
                for(i = 1; i <= n; i++){
                    for(j = (n - i); j >= 0; j--)
                        printf(" ");
                    for(k = 1; k <= i; k++)
                        printf("* ");
                    printf("\n");
                }
                break;
            case(27):
                for(i = 1; i <= n; i++){
                    if((i % 2) == 0) printf(" ");
                    for(j = 1; j <= n; j++)
                        printf("* ");
                    printf("\n");
                }
                break;
            case(28):
                for(i = 1; i <= n; i++){
                    printf("*");
                    if((i == 1) || (i == n)){
                        for(j = 1; j <= (n - 2); j++)
                            printf("*");
                        printf("*\n");
                        continue;
                    }
                    for(k = 1; k <= (n - 2); k++)
                        printf(" ");
                    printf("*\n");
                }
                break;
            default: printf("Greska pri unosu broja zadatka.\n");
        }
        fflush(stdin);
        printf("Da li ste gotovi? D/N\n");
        scanf("%c", &a);
        if((a == 'D' || a == 'd'))
            break;
        else if((a == 'N' || a == 'n'))
            continue;
        else{
            printf("Pogresan unos. IZLAZ!!!");
            break;
        }

    }

}
