#include<stdio.h>

main(){
    int C, B, P;
    float v;
    printf("Unesite broj crnih kuglica: ");
    scanf("%d", &C);
    printf("Unesite broj belih kuglica: ");
    scanf("%d", &B);
    printf("Unesite broj plavih kuglica: ");
    scanf("%d", &P);
    v=(float)C/(C+B+P)*100;
    printf("Verovatnoca da ce biti izvucene crne kuglice: %.2f%%\n", v);
    system("pause");
}
