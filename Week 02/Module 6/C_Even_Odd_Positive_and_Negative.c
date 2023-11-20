#include <stdio.h>
int main()
{
    int i,number;
    scanf("%d", &number);
    int currentNumber;
    int even=0, odd=0, pos=0, neg=0;
    for(i=1; i<=number; i++){
        scanf("%d", &currentNumber);
        if(currentNumber%2==0){
            even++;
        }
        else if(currentNumber%2!=0){
            odd++;
        }
        if(currentNumber>0){
            pos=pos+1;
        }
        else if(currentNumber<0){
            neg=neg+1;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, pos, neg);
    return 0;
}