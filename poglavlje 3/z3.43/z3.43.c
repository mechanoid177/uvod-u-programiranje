#include<stdio.h>

main(){
    int
    printf("Unesite binarni broj: "); scanf("%d", &b);
    while((ch = getchar()) != '\n'){
        i++;
        a = a * 2 + (ch - '0');
        printf("%d\n", a);
        if(a < 10) printf("%d", a);
        else printf("%c", a + 55);
    }
}
