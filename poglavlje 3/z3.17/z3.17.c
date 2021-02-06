#include<stdio.h>

//euklidov algoritam

main(){
    int a, n, m;
    printf("Unesite n: "); scanf("%d", &n); //nesto scanf nije u redu
    printf("Unesite m: "); scanf("%d", &m);
    if(n > m){
        printf("if%d %d\n", m, n);
        while(n != 0){
            a = m;
            m = n % m;
            n = a;
            printf("w%d %d\n", m, n);
        }
        printf("Najveci zajednicki delilac unetih brojeva je %d\n", m);
    }
    else if(m > n){
        while(m != 0){
            a = n;
            n =m % n;
            m = a;
        }
        printf("Najveci zajednicki delilac unetih brojeva je %d\n", n);
    }
    else
        printf("Najveci zajednicki delilac unetih brojeva je %d\n", n);
    return 0;
}
