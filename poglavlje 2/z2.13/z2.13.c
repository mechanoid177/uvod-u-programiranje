#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
    int a, n;
    srand(time(0));
    a = rand() % 10 + 1;
    printf("Pogodite broj od 1 do 10: "); scanf("%d", &n);
    if(n == a){
        printf("Bvavo!!!/n");
        return 1;
    }
    else{
        printf("PONOVO: "); scanf("%d", &n);
        if(n == a){
            printf("Bvavo!!!/n");
            return 1;
        }
        else{
            printf("PONOVO: "); scanf("%d", &n);
            if(n == a){
            printf("Bvavo!!!\n");
            return 1;
            }
            else{
                printf("Vise srece drugi put.\n");
                return 0;
            }
    }
    }
}
