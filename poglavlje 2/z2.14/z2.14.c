#include<stdio.h>
#include<math.h>

main(){
    int n;
    printf("Unesite trocifren ceo broj: ");
    scanf("%d", &n);
    printf("Broj %d %s Armstrongov broj.\n", n,
           pow(n%10,3)+pow(n%100/10,3)+pow(n/100,3)==n ? "je" : "nije");
    system("pause");
}

