#include<stdio.h>

main(){
    int i, n, kc, c;
    for(i = 100; i <= 999; i++){
        n = i;
        kc = 0;
        while(n > 0){
            c = n % 10;
            n /= 10;
            kc += c * c * c;
        }
        if(kc == i) printf("%d\n", i);
    }
}
