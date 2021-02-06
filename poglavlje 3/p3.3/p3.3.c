#include<stdio.h>
#include<math.h>

main(){
    int i, n;
    printf("Unesite broj: ");
    scanf("%d", &n);
    printf("+------+------------------+-------------+-----------+\n");
    printf("| BROJ |    KUB BROJA     |KVADRAT BROJA|KOREN BROJA|\n");
    printf("|______|__________________|_____________|___________|\n");
    //printf("|------+------------------+-------------+-----------|\n");
    for(i=1; i<=n; i++){
        printf("|%-6i|%-18i|%-13i|%-11f|\n", i, i*i*i, i*i, sqrt(i));
        printf("|------+------------------+-------------+-----------|\n");
    }
    return 0;
}
