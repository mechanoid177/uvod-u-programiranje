#include<stdio.h>

main(){
    int ch;
    while((ch = getchar()) != EOF){
        if(((ch > 64) && (ch < 88)) || ((ch > 96) && (ch < 120)))
            ch += 3;
        else if(((ch > 87) && (ch < 91)) || ((ch > 119) && (ch < 123)))
            ch -= 23;
        putchar(ch);
    }
}
