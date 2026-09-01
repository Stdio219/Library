#include <stdio.h>
int main(){

    printf("========Temperature========\n");

    float F, C, FA, CA;
    int L, U, S, LA, UA, SA;

    L = 0;
    U = 300;
    S = 20;
    LA = 0;
    UA = 100;
    SA = 10;

    CA = LA;

    F = L;

    //Fharengeit to Celsium
    printf("===Fharengeit to Celsium===\n");
    while (F <= U) {
        C = (5.0/9.0) * (F-32.0);
        printf("%3.0f %6.1f\n", F, C);
        F = F + S;
    }
    printf("\n");

    //Celsium to Fharengeit
    printf("===Celsium to Fharengeit===\n");
    while (CA <= UA) {
        FA = (9.0/5.0) * CA + 32.0;
        printf("%3.0f %6.1f\n", CA, FA);
        CA = CA + SA;
    }
    printf("\n");

    return 0;
}
