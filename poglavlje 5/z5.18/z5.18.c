#include <stdio.h>
#include <math.h>

#define MAX_SIZE 100

void ucitaj_niz(int *a, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("Unesite %d koeficijent: ", i);
        scanf("%d", a + i);
    }
}

double pol(int *a, int n, int x){
    int i;
    double pol = 0.0;
    for(i = 0; i < n; i++){
        pol += a[i] * pow(x, i);
    }
    return pol;
}

void zbir_pol(double pol1, double pol2){
    printf("P(x) + Q(x) = %lf\n", pol1 + pol2);
}

void pro_pol(double pol1, double pol2){
    printf("P(x) * Q(x) = %lf\n", pol1 * pol2);
}

void main(){
    int pn, qn, x, p[MAX_SIZE], q[MAX_SIZE];
    printf("Unesite broj koeficijenata P(x): ");
    scanf("%d", &pn);
    ucitaj_niz(p, pn);
    printf("Unesite broj koeficijenata Q(x): ");
    scanf("%d", &qn);
    ucitaj_niz(q, qn);
    printf("Unesite vrednost za x: ");
    scanf("%d", &x);
    zbir_pol(pol(p, pn, x), pol(q, qn, x));
    pro_pol(pol(p, pn, x), pol(q, qn, x));
}
