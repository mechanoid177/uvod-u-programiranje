#include <stdio.h>
#include <math.h>

main(){
    float x;
    printf("Unesite vrednost za x: ");
    scanf("%f", &x);
    if(x<-5)
        printf("y = %f\n", abs(x+2));
    else if(x<1)
        printf("y = %f\n", pow(x,x));
    else if(x<5)
        printf("y = %f\n", 3*x*x-x);
    else
        printf("y = %f\n", x);
    system("pause");
}
