#include <stdio.h>
int main()
{
    int i, T;
    scanf("%d", &T);
    // printf("%d\n", T);

    int number;
    for(i=1; i<=T; i++){
        scanf("%d", &number);
        do{
            printf("%d ", number%10);
            number=number/10;
        }
        while (number!=0);
        printf("\n");
    }
    return 0;
}