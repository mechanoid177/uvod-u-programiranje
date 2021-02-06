#include<stdio.h>

main(){
    int n;
    printf("Unesite broj: ");
    scanf("%d", &n);
    if (n%2==0)
        printf("Paran\n");
    else
        printf("Neparan\n");
    system("pause");
}
