//Massives\
+
#include <stdio.h>
int main(){

    //ints & Massives\
    +
    int C, I, NW, NO;
    int ND[10];
    //\
    =
    NW = NO = 0;
    //\
    -
    //Terms & Code\
    +
    for(I = 0; I < 10; ++I)
        ND[I] = 0;
    while((C = getchar()) != EOF){
        if(C >= '0' && C <= '9')
            ++ND[C-'0'];
        else if(C == ' ' || C == '\n' || C == '\t')
            ++NW;
        else
            ++NO;
    }
    //\
    -
    //print\
    +
    printf("Digits = ");
    for(I = 0; I <10; ++I)
        printf("%d", ND[I]);
    printf(", white space = %d, other = %d\n", NW, NO);
    //\
    -
    return 0;
}
//\
-
