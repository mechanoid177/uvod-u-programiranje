#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void citaj_fajl(FILE *f);
void sifruj_cezar(FILE *f);

int main(int argc, char **argv){
    FILE *f;


    if((f = fopen(argv[1], "r+")) == NULL){
        printf("Greska pri otvaranju datoteke!!!\n");
        exit(101);
    }

    printf("Sadrzaj datoteke pre sifrovanja:\n");
    citaj_fajl(f);


    sifruj_cezar(f);

    printf("Sadrzaj datoteke posle sifrovanja:\n");
    citaj_fajl(f);
}

void citaj_fajl(FILE *f){
    char buffer[100];
    while(fgets(buffer, 100, f) != NULL) fputs(buffer, stdout);
    fseek(f, 0, SEEK_SET);
}

void sifruj_cezar(FILE *f){
    int ch;

    while(ch = getc(f))
    {

        if('a' <= ch && ch <= 'z')
        {
            //ch = 'a' + (ch - 'a' + 3) % 26;
            ch+= 3;
            fseek(f,-1,SEEK_CUR);
            putc(ch,f);
            fflush(f);

        }else if('A' <= ch && ch <= 'Z')
        {
            //ch = 'A' + (ch - 'A' + 3) % 26;
            ch+= 3;
            fseek(f,-1,SEEK_CUR);
            putc(ch,f);
            fflush(f);
        }

        if (ch == EOF)
            break;

    }

    fseek(f, 0, SEEK_SET);
}
