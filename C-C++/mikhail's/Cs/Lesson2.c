#include <stdio.h>
int main(){

    printf("========Temperature========\n");
    int T; //T - Temperature

    //Fharengeit to Celsium
    printf("===Fharengeit to Celsium===\n");
    for (T = 0; T <= 300; T = T + 20)
        printf("%3d %6.1f\n", T, (5.0/9.0)*(T-32.0));
    printf("\n");
    //

    //Celsium to Fharengeit
    printf("===Celsium to Fharengeit===\n");
    for(T = 0; T <= 100; T = T + 10)
        printf("%3d %6.1f\n", T, (9.0/5.0)*(T+32.0));
    printf("\n");
    //

    return 0;
}
