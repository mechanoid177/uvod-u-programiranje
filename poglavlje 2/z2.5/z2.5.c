#include<stdio.h>

main(){
    int a, b;
    printf("Unesite brojeve: \n");
    scanf("%d\n%d", &a, &b);
    printf("Broj %d%sje deljiv sa %d\n", a, a%b==0 ? " " : " ni", b);
    system("pause");
}
