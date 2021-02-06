#include <stdio.h>

main(){
    int a, b, c, max;
    printf("Unesite 3 broja\n");
    scanf("%d\n%d\n%d", &a, &b, &c);
    max=a;
    if(b>a && b>c)
        max=b;
    else if(c>a && c>b)
        max=c;
    if(max%2==0)
        printf("Zbir: %d\n", a+b+c);
    else
        printf("Razlika: %d\n", a-b-c);
    system("pause");
}
