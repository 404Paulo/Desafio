#include <stdlib.h>
#include <stdio.h>

int main(){
    int num=30, t1=0, t2=1,t3;

    if( num < 0 ) {
        printf("Sinto muito, esse número não é válido.");
    } else {
        printf("0 - 1");

        while ( t2 < num ) {
            t3 = t2 + t1;
            printf(" -%d", t3);
            t1=t2;
            t2=t3;
        }
        printf("\nO número informado não faz parte da sequencia");
        return 0;
    }
}
