#include<stdio.h>

main(){
    int i, n;
    printf("Unesite n: "); scanf("%d", &n);
    for(i=1; i<=n; i++){
        if(((i%2==1) || (i%6==1)) && (i%7==0))
            printf("%d\n", i);
    }
    return 0;
}
