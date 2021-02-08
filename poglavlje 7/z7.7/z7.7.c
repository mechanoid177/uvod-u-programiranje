#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void create_file(char *ime_fajla, char *opcija, char *string){
    FILE *f;

    if((f = fopen(ime_fajla, opcija)) == NULL){
        printf("Greska pri kreiranju datoteke!!!\n");
        exit(100);
    }

    fputs(string, f);

    fclose(f);
    f = NULL;
}

int main(int argc, char **argv){

    FILE *f1, *f2;
    int i, j, n;
    char ulaz[100][100], buf[100];

    if(argc < 4){
        printf("Nedovoljno argumenata!!!\n");
        exit(101);
    }

    n = atoi(argv[3]);

    for(j = 1; j <= 2; j++)
    {
        printf("Unesite sadrzaj %i. datoteke:\n", j);
        for(i = 0; fgets(ulaz[i], 100, stdin) != NULL; i++)
        {
            create_file(argv[j], "a+", ulaz[i]);
        }
    }

    if((f1 = fopen(argv[1], "r")) == NULL)
    {
        printf("Greska pri otvaranju prve datoteke!!!\n");
        exit(102);
    }

    if((f2 = fopen(argv[2], "a")) == NULL)
    {
        printf("Greska pri otvaranju druge datoteke!!!\n");
        exit(103);
    }

    for(i = 0; i < n && fgets(buf, 100, f1); i++)
        fputs(buf, f2);

    fclose(f1);
    fclose(f2);

    return 0;
}
