#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct{
    int x, y;
} Tacka;

typedef struct{
    Tacka t1, t2;
    int obim;
    double povrsina;
} Pravougaonik;

void ucitaj_tacku(Tacka *t){
    printf("Unesite x i y kooordinatu: "); scanf("%d %d", &(t->x), &(t->y));
}

void ucitaj_pravougaonik(Pravougaonik *p){
    printf("Unesite prvu tacku pravougaonika:\n");
    ucitaj_tacku(&p->t1);
    printf("Unesite drugu tacku pravougaonika:\n");
    ucitaj_tacku(&p->t2);
}

void obim(Pravougaonik *p){
    p->obim = 2 * abs(p->t1.x - p->t2.x) + 2 * abs(p->t1.y - p->t2.y);
}

void povrsina(Pravougaonik *p){
    p->povrsina = 1.0 * abs(p->t1.x - p->t2.x) * abs(p->t1.y - p->t2.y);
}

double rastojanje(Tacka *t1, Tacka *t2){
    return sqrt((t2->x - t1->x)*(t2->x - t1->x)+(t2->y - t1->y)*(t2->y - t1->y));
}

double povrsina_trougla(Tacka *t1, Tacka *t2, Tacka *t3){
    double s, r1, r2, r3;
    r1 = rastojanje(t1, t2);
    r2 = rastojanje(t1, t3);
    r3 = rastojanje(t2, t3);
    s = (r1 + r2 + r3) / 2;
    return sqrt(s * (s - r1) * (s - r2) * (s - r3));
}

int pripada(Pravougaonik *p, Tacka *t){
    double pt1, pt2, pt3, pt4;
    Tacka t3, t4;
    t3.x = p->t1.x;
    t3.y = p->t2.y;
    t4.x = p->t2.x;
    t4.y = p->t1.y;
    pt1 = povrsina_trougla(&p->t1, t, &t3);
    pt2 = povrsina_trougla(&p->t1, t, &t4);
    pt3 = povrsina_trougla(&p->t2, t, &t3);
    pt4 = povrsina_trougla(&p->t2, t, &t4);
    if((pt1 + pt2 + pt3 + pt4) > p->povrsina) return 0;
    else return 1;
}

int main(){
    Pravougaonik p[100], tmp;
    Tacka z;
    int i, j, indeks[100], k = 0, ponovo = 0;;
    char n = 'd';

    for(i = 0; i < 100 && n != 'n'; i++){
        printf("Unesite koordinate tacaka %d. pravougaonika:\n", i + 1);
        ucitaj_pravougaonik(&p[i]);
        fflush(stdin);
        obim(&p[i]);
        povrsina(&p[i]);
        printf("Jos? d/n ");
        scanf("%c", &n);
    }

    printf("Unesite tacku z:\n");
    ucitaj_tacku(&z);
    for(j = 0; j < i; j++)
        if(pripada(&p[j], &z))
            indeks[k++] = j;

    do{
        ponovo = 0;
        for(j = 0; j < k; j++)
            if(p[indeks[j]].povrsina < p[indeks[j] - 1].povrsina){
                tmp = p[indeks[j]];
                p[indeks[j]] = p[indeks[j] - 1];
                p[indeks[j] - 1] = tmp;
                ponovo = 1;
            }
    }while(ponovo);

    printf("Pravougaonici kojima pripada tacka z poredjani po povrsinama: \n");
    for(j = 0; j < k; j++)
        printf("Tacke: (%d, %d) i (%d, %d);\tObim: %d;\tPovrsina: %lf\n",
               p[indeks[j]].t1.x,
               p[indeks[j]].t1.y,
               p[indeks[j]].t2.x,
               p[indeks[j]].t2.y,
               p[indeks[j]].obim,
               p[indeks[j]].povrsina
               );


    return 0;
}
