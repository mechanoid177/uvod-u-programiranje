#include<stdio.h>

main(){
    int ch, sc = 0, br = 0;
    while((ch = getchar()) != '\n'){
        if((ch > 57) || (ch < 48)){
            printf("Greska pri unosu\n");
            return 1;
        }
        sc += ch - 48;
        br++;
    }
    printf("srednja vrednost cifara: %f\n", 1.0 * sc / br);
}
