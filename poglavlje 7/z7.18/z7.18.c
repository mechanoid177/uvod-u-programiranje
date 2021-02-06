#include <stdio.h>
#include <stdlib.h>

typedef struct {
    double x;
    double y;
} Tacka;

void ucitaj_tacku(Tacka *t) {
    printf("Unesite x koordinatu tacke: "); scanf("%lf", &t->x);
    printf("Unesite y koordinatu tacke: "); scanf("%lf", &t->y);
}

double kolinearnost(Tacka t[]) {
    return t[0].x * (t[1].y - t[2].y) + t[1].x * (t[2].y - t[0].y) + t[2].x * (t[0].y - t[1].y);
}

int main() {
    Tacka t[3], ts[3];
    int i;

    for(i = 0; i < 3; i++) {
        printf("Unesite koordinate %i. tacke.\n", i + 1);
        ucitaj_tacku(&t[i]);
    }

    if( !kolinearnost(t) ) {
        printf("Tacke su kolinearne!!!\n");
        exit(100);
    }

    for(i = 0; i < 3; i++) {
        ts[i].x = 0.5 * (t[i].x + t[(i == 2) ? 0 : 1].x);
        ts[i].y = 0.5 * (t[i].y + t[(i == 2) ? 0 : 1].y);
    }

    printf("Povrsina: %.3lf\n", 0.5 * kolinearnost(ts));

    return 0;
}
