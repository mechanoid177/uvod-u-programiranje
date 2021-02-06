#include<stdio.h>

main(){
    int ch;
    int br_redova=0;
    while ((ch = getchar()) != EOF)
        if(ch=='\n') br_redova++;
    printf("Broj redova je %d\n", br_redova);
    return 0;
}
