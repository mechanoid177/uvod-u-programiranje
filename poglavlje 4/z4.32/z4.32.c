#include <stdio.h>
#include <math.h>

double distanca(int x1, int x2, int y1, int y2){
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

main(){
    int x1, x2, y1, y2;
    printf("Unesite koordinate prve tacke: ");
    scanf("%d%d", &x1, &y1);
    printf("Unesite koordinate druge tacke: ");
    scanf("%d%d", &x2, &y2);
    printf("Distanca je %lf\n", distanca(x1, x2, y1, y2));
}
