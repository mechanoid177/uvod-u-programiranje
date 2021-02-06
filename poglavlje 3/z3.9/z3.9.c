#include<stdio.h>
#include<math.h>

main(){
    int m, n, k, i;
    printf("Unesite donju granicu, korak i gornju granicu: "); scanf("%d\n%d\n%d", &m, &k, &n);
    printf(" ---- --------\n");
    printf("|BROJ|KOREN   |\n");
    printf(" ---- --------\n");
    for(i=m; i<=n; i+=k)
        printf("|%-4d|%-5f|\n", i, sqrt(i));
        printf(" ---- --------\n");
    return 0;
}
