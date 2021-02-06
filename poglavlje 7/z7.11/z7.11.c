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

void ispisi_mat(int mat[][100], int *n) {
    int i, j;
    for(i = 0; i < *n; i++) {
        for(j = 0; j < *n; j++)
            printf("%i ", mat[i][j]);
        printf("\n");
    }
}

int main(int argc, char **argv) {
    FILE *f;
    char ulaz[100][100], br[100], ch;
    int i, j, n[2], m1[100][100], m2[100][100], s = 0;

    for(i = 0; fgets(ulaz[i], 100, stdin) != NULL && i < 100; i++)
        create_file(argv[1], "a", ulaz[i]);

    if( (f = fopen(argv[1], "r")) == NULL ) {
        printf("Greska pri otvaranju datoteke!!!\n");
        exit(101);
    }

    for(i = 0; i < 2; i++) {
        fgets(br, 100, f);
        n[i] = atoi(br);
    }

    for(i = 0; i <= n[0]; i++) {
        for(j = 0; j <= n[0]; j++) {
            do {
                ch = fgetc(f);
                if( (ch == ' ') || (ch == '\n') ) {
                    m1[i][j] = s;
                    s = 0;
                    break;
                }
                s += ch - '0';
            }while(ch != EOF);
        }
    }
    ispisi_mat(m1, &n[0]);

    s = 0;
    for(i = 0; i <= n[1]; i++) {
        for(j = 0; j <= n[1]; j++) {
            do {
                ch = fgetc(f);
                if( (ch == ' ') || (ch == '\n') ) {
                    m2[i][j] = s;
                    s = 0;
                    break;
                }
                s += ch - '0';
            }while(ch != EOF);
        }
    }
    ispisi_mat(m2, &n[1]);

    fclose(f);
    return 0;
}
