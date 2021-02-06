#include <stdio.h>
#include <stdlib.h>

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

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubble_sort(int niz[], int *n) {
   int i, j;
   for (i = 0; i < n-1; i++)
       for (j = 0; j < *n-i-1; j++)
           if (niz[j] > niz[j+1])
              swap(&niz[j], &niz[j+1]);
}

void ispisi_niz(int niz[], int *n) {
    int i;
    for ( i = 0; i < *n; i++ )
        printf("%d ", niz[i]);
    printf("\n");
}

int main(int argc, char **argv) {
    FILE *f;
    char ulaz[100][100], br[100];
    int i, niz[100];

    for(i = 0; fgets(ulaz[i], 100, stdin) != NULL && i < 100; i++)
        create_file(argv[1], "a", ulaz[i]);

    if( (f = fopen(argv[1], "r")) == NULL ) {
        printf("Greska pri otvaranju datoteke!!!\n");
        exit(101);
    }

    for( i = 0; fgets(br, 100, f); i++) {
        niz[i] = atoi(br);
    }

    bubble_sort(niz, &i);

    ispisi_niz(niz, &i);

    fclose(f);
    return 0;
}
