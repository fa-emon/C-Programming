#include <stdio.h>
int main()
{
    int i,number;
    scanf("%d", &number);
    for(i=1; i<=number; i++){
        int currentNumber;
        scanf("%d", &currentNumber);
        if(currentNumber<0){
            printf("Even:%d ", currentNumber);
        }
    }
    return 0;
}