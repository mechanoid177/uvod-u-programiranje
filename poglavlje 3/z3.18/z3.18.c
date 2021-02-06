#include<stdio.h>

main(){
    int a, b, c=0, i;
    printf("Unesite a: "); scanf("%d", &a);
    printf("Unesite b: "); scanf("%d", &b);
    if(a > b){
        for(i=1; c <= a; i++)
            c = b * i;
        printf("%d / %d = %d, ostatak %d\n", a, b, i - 2, a - b * (i - 2));
    }
    else if(a < b){
        for(i=1; c <= b; i++)
            c = a * i;
        printf("%d / %d = %d, ostatak %d\n", b, a, i - 2, b - a * (i - 2));
    }
    else
        printf("%d / %d = 1, ostatak 0\n", a, b);
}
