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

void ispisi_mat(int mat[][100], int n[])
{
    for(int i = 0; i < n[0]; i++) {
        for(int j = 0; j < n[1]; j++)
            printf("%i ", mat[i][j]);
        printf("\n");
    }
}

int main(int argc, char **argv) {
    FILE *f;
    char ulaz[100][100];
    int n[4], m[2][100][100];

    if(argc < 2){
        printf("Nedovoljno argumenata!!!\n");
        exit(101);
    }

    printf("Unesite sadrzaj datoteke:\n");
    for(int i = 0; fgets(ulaz[i], 100, stdin) != NULL && i < 100; i++)
        create_file(argv[1], "a", ulaz[i]);

    if( (f = fopen(argv[1], "r")) == NULL ) {
        printf("Greska pri otvaranju datoteke!!!\n");
        exit(101);
    }

    fscanf(f, "%i %i", n[0], n[1]);
    fscanf(f, "%i %i", n[2], n[3]);

    for (int k = 0; k < 2; k++)
        for (int i = 0; i < n[(k == 0)?k:k+1]; i++)
            for (int j = 0; j < n[(k == 0)?k+1:k+2]; j++)
                fscanf(f, "%i", m[k][i][j]);



    ispisi_mat(m[1], n);
    ispisi_mat(m[2], &n[2]);


    fclose(f);
    return 0;
}
