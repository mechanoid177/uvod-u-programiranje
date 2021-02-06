#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct{
    int x;
    int y;
} Tacka;

void ucitaj_tacku(Tacka *t){
    printf("Unesite x kooordinatu: "); scanf("%d", &(t->x));
    printf("Unesite y kooordinatu: "); scanf("%d", &(t->y));
}

double rastojanje(Tacka *t1, Tacka *t2){
    return sqrt((t2->x - t1->x)*(t2->x - t1->x)+(t2->y - t1->y)*(t2->y - t1->y));
}

int main(){
    Tacka t[3];
    int i, k, n;
    double r[3], s = 0.0, p;

    for(i = 1; i <= 3; i++){
        printf("Unesite koordinate %d. tacke:\n", i);
        ucitaj_tacku(&t[i - 1]);
    }

    printf("Unesite nagib i pomeraj prave: ");
    scanf("%d %d", &k, &n);

    for(i = 0; i < 3; i++){
        r[i] = rastojanje(&t[i], (i == 2) ? &t[0] : &t[i + 1]);
        printf("Rastojanje izmedju tacka (%d, %d) i (%d, %d): %lf\n",
                t[i].x,
                t[i].y,
                ((i == 2) ? t[0] : t[i + 1]).x,
                ((i == 2) ? t[0] : t[i + 1]).y,
                r[i]
        );
        if(t[i].y == (k * t[i].x + n))
            printf("Prava sadrzi tacku (%d, %d).\n", t[i].x, t[i].y);
        s += r[i] / 2;
    }

    p = sqrt(s * (s - r[0]) * (s - r[1]) * (s - r[2]));
    printf("Povrsina trougla koji obrazuju tacke je: %lf\n", p);

    return 0;
}
