#include <stdio.h>

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int sum = num1 + num2;
    int subtract = num1 - num2;
    int multiply = num1 * num2;
    float divide = (float)num1 / num2;
    
    printf("%d %d %d %.2f", sum, subtract, multiply, divide);
}