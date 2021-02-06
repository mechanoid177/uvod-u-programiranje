#include<stdio.h>

main(){
    float x, y;
    printf("Unesite x: ");
    scanf("%f", &x);
    if(x<0)
        y=-2*x;
    else if(x<1)
        y=x;
    else
        y=x*x;
    printf("y=%f\n", y);
    system("pause");
}
