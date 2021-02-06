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
    while((ch = getc(f)) != EOF){
        if('a' <= ch && ch <= 'z') ungetc('a' + (ch - 'a' + 3) % 26, f);
        else if('A' <= ch && ch <= 'Z') ungetc('A' + (ch - 'A' + 3) % 26, f);
        getc(f);
    }
    fseek(f, 0, SEEK_SET);
}

void desifruj_cezar(FILE *f){
    int ch;
    while((ch = getc(f)) != EOF){
        if('a' <= ch && ch <= 'z') ungetc('a' + (ch - 'a' - 3) % 26, f);
        else if('A' <= ch && ch <= 'Z') ungetc('A' + (ch - 'A' - 3) % 26, f);
        getc(f);
        //fseek(f, sizeof(int), SEEK_CUR);
    }
    fseek(f, 0, SEEK_SET);
}

int main(){
    FILE *f;
    char ulaz[100][100];
    int i;

    for(i = 0; fgets(ulaz[i], 100, stdin) != NULL && i < 100; i++)
        create_file("f.txt", "a", ulaz[i]);

    if((f = fopen("f.txt", "r+")) == NULL){
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



