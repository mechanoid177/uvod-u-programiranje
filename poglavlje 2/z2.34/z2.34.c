#include <stdio.h>
#include <math.h>

main(){
    float x, y;
    printf("Unesite vrednost za x i y:\nx = ");
    scanf("%f", &x);
    printf("y = ");
    scanf("%f", &y);
    if(x<0 && y>0)
        printf("z = %f\n", abs(x+y));
    else if(x<1 && -1<y && y<=0)
        printf("z = %f\n", x<y ? y : x);
    else
        printf("z = %f\n", pow(x,y));
    system("pause");
}
