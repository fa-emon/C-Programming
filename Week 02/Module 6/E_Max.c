#include <stdio.h>
#include<limits.h> //(INT_MIN ba INT_MAX) er jonno eta import korte hoy.
int main()
{
    int i,number;
    scanf("%d\n", &number);

    int maxValue = INT_MIN;
    int minValue = INT_MAX;
    int currentValue;

    for(i=1; i<=number; i++){
        scanf("%d", &currentValue);
        if(currentValue>maxValue){
            maxValue=currentValue;
        }
        if(currentValue<minValue){
            minValue=currentValue;
        }
    }
    printf("Max-Value: %d\nMin-Value: %d\n", maxValue, minValue);
    return 0;
}
// ekhane shudhu max-value ber korte bolche, ami duitai ber korchi tai Failed dekhacce bujhte parcho.