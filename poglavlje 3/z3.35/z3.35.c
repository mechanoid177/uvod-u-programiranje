#include<stdio.h>

main(){
    int br = 0, ch, pom = ' ';

    while((ch = getchar()) != EOF){
        if(((ch == ' ') || (ch == '\t') || (ch == '\n')) && !((pom == ' ') || (pom == '\t') || (pom == '\n')))
            br++;
        pom = ch;
    }
    printf("Broj reci: %d\n", br);
}
