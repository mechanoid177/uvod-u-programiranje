#include<stdio.h>
#include<math.h>

main(){
    //const float PI = 3.14;
    int i = 1;
    float s = 0.0, epsi;
    printf("Unesite tacnost: "); scanf("%lf", &epsi);
    while(fabs(s - (M_PI * M_PI) / 6) > epsi){
        s += 1.0 / (i * i);
        printf("%f\n", s);
        i++;
    }
    printf("Minimalno n je %d\n", i);
}
