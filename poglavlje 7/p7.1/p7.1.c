#include <stdio.h>

typedef struct {
    char ime[20];
    char prezime[20];
    int god;
} Osoba;

int main() {
    Osoba o1, o2, m;
    printf("Unesite ime, prezime i godiste prve osobe: ");
    scanf("%s %s %d", o1.ime, o1.prezime, &o1.god);
    printf("Unesite ime, prezime i godiste druge osobe: ");
    scanf("%s %s %d", o2.ime, o2.prezime, &o2.god);
    m = (o1.god < o2.god) ? o1 : o2;
    printf("Starija je %s %s.\n", m.ime, m.prezime);
}
