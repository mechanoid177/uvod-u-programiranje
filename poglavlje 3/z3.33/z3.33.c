#include<stdio.h>

main(){
    int  praz = 0, tac = 0, inte = 0;
    int ch;
    fflush(stdin);
    while((ch = getchar()) != EOF){
        if((ch == ' ') || (ch == '\t')) praz++;
        if(ch == '.') tac++;
        if((ch == ':') || (ch == '!') || (ch == '?') || (ch == ',')) tac++;
        inte++;
        fflush(stdin);
    }
    printf("Praznine: %d\nINTER: %d\ntacke %d", praz, inte, tac);
}
//ovo radi. zasto?
/*
#include<stdio.h>

main(){
    int  praz = 0, tac = 0, inte = 0;
    int ch;

    while((ch = getchar()) != EOF){
        switch(ch){
            case ' ': case '\t':
                praz++;
                break;
            case ',': case ':': case '!':case '?':
                inte++;
                break;
            case '.':
                tac++;
        }
    }
    printf("Praznine: %d\nINTER: %d\ntacke %d", praz, inte, tac);
}
*/
