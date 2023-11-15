#include<stdio.h>
int main()
{
    int value;
    scanf("%d", &value);
    if(value > 0){
        printf("Positive");
    }
    else if(value < 0){
        printf("Negative");
    }
    else{
        printf("Zero");
    }
}