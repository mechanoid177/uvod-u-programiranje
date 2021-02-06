#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char ime[50];
    char prezime[50];
    int indeks;
    int kol1;
    int kol2;
    int ukupno;
} Student;

void stud_sort(Student s[], int n) {
    int i, j;
    for(i = 0; i < n - 1; i++)
        for(j = i + 1; j < n; j++)
            if(s[i].ukupno < s[j].ukupno) {
                Student tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
            }
}

int main() {
    FILE *f1, *f2;
    Student s[100];
    int i = 0, j;

    if( (f1 = fopen("studenti.txt", "r")) == NULL ) {
        printf("Greska pri otvaranju datoteke studenti.txt!!!\n");
        exit(100);
    }

    while(fscanf(f1, "%s %s %i %i %i", &s[i].ime, &s[i].prezime, &s[i].indeks, &s[i].kol1, &s[i].kol2) != EOF) {
        s[i].ukupno = s[i].kol1 + s[i].kol2;
        i++;
    }

    fclose(f1);

    if( (f2 = fopen("rezultati.txt", "w")) == NULL ) {
        printf("Greska pri otvaranju datoteke rezultati.txt!!!\n");
        exit(101);
    }

    stud_sort(s, i);

    for(j = 0; j <= i; j++)
        if(s[j].ukupno > 55 && s[j].kol1 > 24 && s[j].kol1 > 24)
            fprintf(f2, "%s %s %i %i %i %i\n",
                    s[j].ime,
                    s[j].prezime,
                    s[j].indeks,
                    s[j].kol1,
                    s[j].kol2,
                    s[j].ukupno);

    fclose(f2);
    return 0;
}
