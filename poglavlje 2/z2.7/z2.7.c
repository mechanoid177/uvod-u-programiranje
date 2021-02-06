#include<stdio.h>

main(){
    float x, y;
    printf("Unesite vrednost za x: ");
    scanf("%f", &x);
    if(x<0)
        y=-5;
    else if(x<=1)
        y=x+2;
    else if(x<5)
        y=x*3-2;
    else
        y=2*x;
    printf("y = %f\n", y);
    system("pause");
}
