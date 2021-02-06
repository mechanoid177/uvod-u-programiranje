#include<stdio.h>

main(){
    int pch=EOF, ch;
    while((ch=getchar())!='\n'){ //while((ch=getchar())!=EOF){
        if(!((ch==' ' && pch==' ') || (ch=='\t' && pch=='\t')))
            putchar(ch);
    pch=ch;
    }
    return 0;
}
