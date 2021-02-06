#include<stdio.h>

main(){
    int ch, pom = ' ', poc = EOF, br = 0;

    while((ch = getchar()) != EOF){
        if(!((ch == ' ') || (ch == '\t') || (ch == '\n')) && ((pom == ' ') || (pom == '\t') || (pom == '\n')))
            poc = ch;
        else if(((ch == ' ') || (ch == '\t') || (ch == '\n')) && (pom == poc)){
            br++;
            printf("%d", br);
        }
        pom = ch;
    }
    printf("Broj reci: %d\n", br);
}
