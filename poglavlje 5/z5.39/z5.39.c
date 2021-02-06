#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void popuni_mat(int **c, int n, int m){
    int i, j;
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            *(*(c + i) + j) = rand() % 100 + 1;
}

void ispisi_mat(int **c, int n, int m){
    int i, j;
    for(i = 0; i < n; i++){
        if(i == n - 1) printf("\\ ");
        else if(i == 0) printf("/ ");
        else printf("| ");
        for(j = 0; j < m; j++)
            printf("%3d ", *(*(c + i) + j));
        if(i == 0) printf("\\ ");
        else if(i == n - 1) printf("/");
        else printf("| ");
        printf("\n");
    }
}

int zbir_mat(int **a, int **b, int na, int ma, int nb, int mb){
    int i, j, n = na, m = ma;
    if(na != nb || ma != mb){
        printf("Dimenzije matrica se ne poklapaju.\n");
        printf("Sabiranje nije moguce\n");
        return 0;
    }
    for(i = 0; i < n; i++){
        if(i == n - 1) printf("\\ ");
        else if(i == 0) printf("/ ");
        else printf("| ");
        for(j = 0; j < m; j++)
            printf("%3d ", *(*(a + i) + j) + *(*(b + i) + j));
        if(i == 0) printf("\\ ");
        else if(i == n - 1) printf("/");
        else printf("| ");
        printf("\n");
    }
    return 1;
}

int razlika_mat(int **a, int **b, int na, int ma, int nb, int mb){
    int i, j, n = na, m = ma;
    if(na != nb || ma != mb){
        printf("Dimenzije matrica se ne poklapaju.\n");
        printf("Oduzimanje nije moguce\n");
        return 0;
    }
    for(i = 0; i < n; i++){
        if(i == n - 1) printf("\\ ");
        else if(i == 0) printf("/ ");
        else printf("| ");
        for(j = 0; j < m; j++)
            printf("%3d ", *(*(a + i) + j) - *(*(b + i) + j));
        if(i == 0) printf("\\ ");
        else if(i == n - 1) printf("/");
        else printf("| ");
        printf("\n");
    }
    return 1;
}

int proizvod_mat(int **a, int **b, int na, int ma, int nb, int mb){
    int i, j, k, c;
    if(ma != nb){
        printf("Dimenzije matrica se ne poklapaju.\n");
        printf("Mnozenje nije moguce\n");
        return 0;
    }
    for(i = 0; i < na; i++){
        if(i == na - 1) printf("\\ ");
        else if(i == 0) printf("/ ");
        else printf("| ");
        for(j = 0; j < mb; j++){
            c = 0;
            for(k = 0; k < ma; k++)
                c += *(*(a + i) + k) * *(*(b + k) + j);
            printf("%5d ", c);
        }
        if(i == 0) printf("\\ ");
        else if(i == na - 1) printf("/");
        else printf("| ");
        printf("\n");
    }
}

void main(){
    int **a, **b;
    int na, ma, nb, mb, i;
    srand(time(0));
    printf("Unesite dimenzije matrice A: ");
    scanf("%d%d", &na, &ma);
    printf("Unesite dimenzije matrice B: ");
    scanf("%d%d", &nb, &mb);
    a = (int**)malloc(na * sizeof(int*));
    b = (int**)malloc(nb * sizeof(int*));
    for(i = 0; i < na; i++){
        a[i] = (int*)malloc(ma * sizeof(int));
    }
    for(i = 0; i < nb; i++){
        b[i] = (int*)malloc(mb * sizeof(int));
    }
    popuni_mat(a, na, ma);
    printf("A = \n");
    ispisi_mat(a, na, ma);
    popuni_mat(b, nb, mb);
    printf("\nB = \n");
    ispisi_mat(b, nb, mb);
    printf("\nA + B = \n");
    zbir_mat(a, b, na, ma, nb, mb);
    printf("\nA - B = \n");
    razlika_mat(a, b, na, ma, nb, mb);
    printf("\nA * B = \n");
    proizvod_mat(a, b, na, ma, nb, mb);
    free(a);
    free(b);
}
