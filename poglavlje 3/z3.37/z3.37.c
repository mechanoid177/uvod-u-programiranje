#include<stdio.h>

main(){
    int ch, pom = ' ', br = 1, pom1 = 0, max;
    while((ch = getchar()) != EOF){
        if(((ch == 'a') || (ch == 'A')) && ((pom == 'a') || (pom == 'A'))){
            br++;
        }
        else if(((ch != 'a') || (ch != 'A')) && ((pom == 'a') || (pom == 'A'))){
            pom1 = br;
            br = 1;
        }
        if(pom1 > br) max = pom1;
        else max = br;
        pom = ch;
    }
    printf("%d\n", max);
}
