#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void create_file(char *ime_fajla, char *opcija, char *string){
    FILE *f;

    if ((f = fopen(ime_fajla, opcija)) == NULL){
        printf("Greska pri kreiranju datoteke!!!\n");
        exit(100);
    }

    fprintf(f, "%s", string);

    fclose(f);
    f = NULL;
}

void citaj_fajl(FILE *f){
    char buffer[100];
    while(fgets(buffer, 100, f) != NULL) fputs(buffer, stdout);
    fseek(f, 0, SEEK_SET);
}

void sifruj_cezar(FILE *f){
    int ch;
    while((ch = getc(f)) != EOF)
    {
        if('a' <= ch && ch <= 'z')
        {
            ch = 'a' + (ch - 'a' + 3) % 26;
            fseek(f, -1, SEEK_CUR);
            putc(ch, f);
            fflush(f);
        }
        else if('A' <= ch && ch <= 'Z')
        {
            ch = 'A' + (ch - 'A' + 3) % 26;
            fseek(f, -1, SEEK_CUR);
            putc(ch, f);
            fflush(f);
        }
    }

    fseek(f, 0, SEEK_SET);
}

void desifruj_cezar(FILE *f){
    int ch;
    while((ch = getc(f)) != EOF){
        if('a' <= ch && ch <= 'z')
        {
            ch = 'a' + (ch - 'a' - 3) % 26;
            fseek(f, -1, SEEK_CUR);
            putc(ch, f);
            fflush(f);
        }
        else if('A' <= ch && ch <= 'Z')
        {
            ch = 'A' + (ch - 'A' - 3) % 26;
            fseek(f, -1, SEEK_CUR);
            putc(ch, f);
            fflush(f);
        }
    }
    fseek(f, 0, SEEK_SET);
}

int main(int argc, char **argv){
    FILE *f;
    char ulaz[100][100];
    int i;

    if(argc < 2){
        printf("Nedovoljno argumenata!!!\n");
        exit(101);
    }

    printf("Unesite sadrzaj datoteke:\n");
    for(i = 0; fgets(ulaz[i], 100, stdin) != NULL && i < 100; i++)
        create_file(argv[1], "a", ulaz[i]);

    if((f = fopen(argv[1], "r+")) == NULL){
        printf("Greska pri otvaranju datoteke!!!\n");
        exit(101);
    }

    printf("Sadrzaj datoteke pre sifrovanja:\n");
    for(i = 0; i < 100; i++) printf("-");
    printf("\n");
    citaj_fajl(f);
    for(i = 0; i < 100; i++) printf("-");
    printf("\n\n");

    sifruj_cezar(f);

    printf("Sadrzaj datoteke posle sifrovanja:\n");
    for(i = 0; i < 100; i++) printf("-");
    printf("\n");
    citaj_fajl(f);
    for(i = 0; i < 100; i++) printf("-");
    printf("\n\n");

    desifruj_cezar(f);

    printf("Sadrzaj datoteke posle desifrovanja:\n");
    for(i = 0; i < 100; i++) printf("-");
    printf("\n");
    citaj_fajl(f);
    for(i = 0; i < 100; i++) printf("-");
    printf("\n\n");

    fclose(f);
    return 0;
}



