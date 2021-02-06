#include<stdio.h>

main(){
    int i, n, m, s = 0;
    printf("Unesite donju granicu: "); scanf("%d", &n);
    printf("Unesite gornju granicu: "); scanf("%d", &m);
    for(i = n; i <= m; i++){
        if(i%2 == 0)
            s += i * i;
        else
            s += i * i * i;
    }
    printf("%d\n", s);
}
