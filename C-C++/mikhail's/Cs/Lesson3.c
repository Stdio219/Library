#include <stdio.h>

//defines
#define L 0
#define U 300
#define S 20

#define LA 0
#define UA 100
#define SA 10
//

int main(){
    printf("========Temperature========\n");
    int T; //T - Temperature

    //Fharengeit to Celsium
    printf("===Fharengeit to Celsium===\n");
    for (T = L; T <= U; T = T + S)
        printf("%3d %6.1f\n", T, (5.0/9.0)*(T-32));
    printf("\n");
    //

    //Celsium to Fharengeit
    printf("===Celsium to Fharengeit===\n");
    for(T = LA; T <= UA; T = T + SA)
        printf("%3d %6.1f\n", T, (9.0/5.0)* T + 32);
    printf("\n");
    //

    return 0;
}
