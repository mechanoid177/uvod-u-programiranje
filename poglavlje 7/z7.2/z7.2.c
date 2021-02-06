#include <stdio.h>
#include <string.h>
#define MAX 100

typedef struct{
    char ime[50];
    char prezime[50];
} Osoba;

void ucitaj_osobu(Osoba *s){
    printf("Unesite ime: ");
    gets(s->ime);
    printf("Unesite prezime: ");
    gets(s->prezime);
}

void sort_osobe(Osoba *s, int n){
    int i, j;
    for(i = 0; i < n - 1; i++)
        for(j = i + 1; j < n; j++){
            if(strcmpi(s[i].prezime, s[j].prezime) > 0){
                Osoba tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
            }
        }
}

void ispisi_osobe(Osoba s[], int n){
    for(int i = 0; i < n; i++)
        printf("%s %s\n", s[i].ime, s[i].prezime);
}

int main(){
    Osoba s[MAX];
    int i, j;
    char n = 'd';
    for(i = 0; i < MAX && n != 'n'; i++){
        fflush(stdin);
        ucitaj_osobu(&s[i]);
        printf("Jos? d/n");
        scanf("%c", &n);
    }
    printf("%s\n", s[1].ime);

    sort_osobe(s, i);
    printf("Sortiran spisak:\n");
    for(j = 0; j < i; j++)
        printf("%s %s\n", s[j].ime, s[j].prezime);
}
