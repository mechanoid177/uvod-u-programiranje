#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void provera(char *str){
    char *s = str;
    while(*s){
        if(*s == ' ' || *s == '\t' || *s == '\n')
            break;
        *str++ = *s++;
    }
    *str = '\0';
}

int main() {
    FILE *f1, *f2, *f3;
    char ime[100], prezime[100];
    int i;

    srand(time(0));

    if( (f1 = fopen("studenti.txt", "w")) == NULL) {
        printf("Greska pri kreiranju datoteke!!!\n");
        exit(100);
    }

    if( (f2 = fopen("ime.txt", "r")) == NULL) {
        printf("Greska pri otvaranju datoteke ime.txt!!!\n");
        exit(101);
    }

    if( (f3 = fopen("prezime.txt", "r")) == NULL) {
        printf("Greska pri otvaranju datoteke prezime.txt!!!\n");
        exit(102);
    }

    for(i = 0; i <= 100; i++){
        fgets(ime, 100, f2);
        fgets(prezime, 100, f3);
        provera(ime);
        provera(prezime);
        fprintf(f1, "%s %s %i %i %i\n", ime, prezime, rand() % 1000 + 1, rand() % 50 + 1, rand() % 50 + 1);
    }

    fclose(f1);
    fclose(f2);
    fclose(f3);
    return 0;
}
