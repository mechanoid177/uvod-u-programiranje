#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
    int a, n, b, i;
    srand(time(0));
    a = rand() % 100 + 1;
    printf("%d\n", a);
    printf("Broj pokusaja: "); scanf("%d", &n);
    printf("Pogodite broj izmedju 1 i 100: "); scanf("%d", &b);
    for(i = 1; i < n; i++){
        if(a == b){
            printf("BRAVO!!!\n");
            return 0;
        }
        else if(b < a){
            printf("Vise: "); scanf("%d", &b);
            continue;
        }
        else
            printf("Manje: "); scanf("%d", &b);
    }
    printf("Trazeni broj je: %d\n", a);
}
