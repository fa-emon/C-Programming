#include <stdio.h>
int main()
{
    int value;
    scanf("%d", &value);
    if (value % 2 == 0)
    {
        printf("even number");
    }
    else
    {
        printf("odd number");
    }
    return 0;
}