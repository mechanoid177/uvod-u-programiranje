#include<stdio.h>

main(){
    int s,n,b,i;
    printf("Unesite granicu za sumu: \n");
    scanf("%d", &n);
    //for petlja
    printf("for petlja:\n");
    s=0;
    for(i=0; s<=n; i++){
        printf("Unesite broj: ");
        scanf("%d", &b);
        s+=b;
    }
    printf("n=%d,s=%d\nwhile petlja:\n", n, s);
    //while petlja
    s=0;
    while (s<=n){
        printf("Unesite broj: ");
        scanf("%d", &b);
        s+=b;
    }
    printf("n=%d,s=%d\ndo...while petlja:\n", n, s);
    //do...while petlja
    s=0;
    do{
        printf("Unesite broj: ");
        scanf("%d", &b);
        s+=b;
    }
    while (s<=n);
    printf("n=%d,s=%d\n", n, s);
    return 0;
}
