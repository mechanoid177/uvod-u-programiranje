#include<stdio.h>

main(){
    int i, s=0;
    for(i=1; i<=5; i++)
        s=s+i;
    printf("for petlja: %d\n", s);
    s=0;
    i=1;
    while (i<=5){
        s=s+i;
        i++;
    }
    printf("while petlja: %d\n", s);
    s=0;
    i=1;
    do
        s+=i++;
    while (i<=5);
    printf("do...while petlja: %d\n", s);
    return 0;
}
