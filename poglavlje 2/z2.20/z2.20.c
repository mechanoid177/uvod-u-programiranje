#include <stdio.h>
#include <math.h>

main(){
    float a, b, c, max, max2;
    printf("Unesite 3 cela broja:\n");
    scanf("%f\n%f\n%f", &a, &b, &c);
    if(c<a && b<a){
        max=a;
        if(c<b)
            max2=b;
        else
            max2=c;
    }
    else if(a<b && c<b){
        max=b;
        if(a<c)
            max2=c;
        else
            max2=a;
    }
    else{
        max=c;
        if(a<b)
            max2=b;
        else
            max2=a;
    }
    printf("Zbir: %f\n", max+max2);
    system("pause");
}
