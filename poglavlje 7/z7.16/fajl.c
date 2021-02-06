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
    FILE *f1, *f2;
    char ime[100], prezime[100];
    int i;

    srand(time(0));

    if( (f1 = fopen("f.txt", "w")) == NULL) {
        printf("Greska pri kreiranju datoteke!!!\n");
        exit(100);
    }

    if( (f2 = fopen("ime.txt", "r")) == NULL) {
        printf("Greska pri otvaranju datoteke ime.txt!!!\n");
        exit(101);
    }

    for(i = 0; i < 1000; i++){
        fgets(ime, 100, f2);
        provera(ime);
        fprintf(f1, "%4i %9i %20s %8.2lf\n", i + 1, rand(), ime, ((float)rand()/(float)(1000)) * 0.5);
    }

    fclose(f1);
    fclose(f2);
    return 0;
}
