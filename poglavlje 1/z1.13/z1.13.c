#include<stdio.h>
#include<math.h>

main(){
    float us, min, sec;
    printf("Unesite ugao: ");
    scanf("%f", &us);
    printf("%d stepeni, ", (int)us);
    min=(us-(int)us)*60;
    printf("%d minuta, ", (int)min);
    sec=(min-(int)min)*60;
    printf("%.2f sekundi\n", sec);
    system("pause");
}
