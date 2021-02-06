#include<stdio.h>
#include<math.h>

main(){
    int m1, m2, c = 3;
    printf("Unesite donju masu: "); scanf("%d", &m1);
    printf("Unesite gornju masu: "); scanf("%d", &m2);
    for(m1; m1 <= m2; m1++){
        printf("E = %d * 10^8\n", m1 * c * c);
    }
}
