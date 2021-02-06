#include <stdio.h>
#include <math.h>

main(){
    float x;
    printf("Unesite vrednost za x: ");
    scanf("%f", &x);
    if(x<=2)
        printf("y = %f\n", cos(x+2.3));
    else if(x<5)
        printf("y = %f\n", sqrt(sqrt(x)));
    else
        printf("y = %f\n", pow(x,4));
    system("pause");
}
