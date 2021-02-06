#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Tacka;

typedef struct {
    Tacka t[3];
    double p;
    double o;
} Trougao;

double rastojanje(Tacka *t1, Tacka *t2) {
    return sqrt((t2->x - t1->x) * (t2->x - t1->x) +  (t2->y - t1->y) * (t2->y - t1->y));
}

void ucitaj_tacku(Tacka *t) {
    printf("Unesite x koordinatu tacke: "); scanf("%lf", &t->x);
    printf("Unesite y koordinatu tacke: "); scanf("%lf", &t->y);
}

double kolinearnost(Tacka t[]) {
    return t[0].x * (t[1].y - t[2].y) + t[1].x * (t[2].y - t[0].y) + t[2].x * (t[0].y - t[1].y);
}

void ucitaj_trougao(Trougao *tr) {
    for(int i = 0; i < 3; i++)
        ucitaj_tacku(&tr->t[i]);
}

int tacka_pripada(Trougao *tr, Tacka *z) {
    double pm = 0;
    for(int i = 0; i < 3; i++) {
        Tacka t[] = {*z, tr->t[i], tr->t[(i == 2) ? 0 : i + 1]};
        pm += 0.5 * kolinearnost(t);
    }
    return tr->p >= pm;
}

int main() {
    Trougao tr[100];
    Tacka z;
    int i = 0, j;
    char ch = 0;

    printf("Unesite tacku z:\n");
    ucitaj_tacku(&z);

    while(i < 100 && ch != 'n') {
        printf("Unesite %i. trougao\n", i + 1);
        ucitaj_trougao(&tr[i]);
        if ( !(tr[i].p = 0.5 * kolinearnost(tr[i].t)) ) {
            printf("Trougao ne postoji!!!\n");
            continue;
        }
        tr[i].o = 0;
        for(j = 0; j < 3; j++) {
            tr[i].o += rastojanje(&tr[i].t[j], &tr[i].t[(j == 2) ? 0 : j + 1]);
            printf("%.4lf\n", tr[i].o);
        }
        printf("Povrsina = %.4lf\nObim = %.4lf\nTacka z%spripada trouglu\n",
               tr[i].p,
               tr[i].o,
               tacka_pripada(&tr[i], &z) ? " " : " ne ");
        i++;
        fflush(stdin);
        printf("Jos trouglova? y/n ");
        scanf("%c", &ch);
    }

    return 0;
}
