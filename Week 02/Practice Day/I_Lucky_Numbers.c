#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);

    if (number % 10 == 0)
    {
        printf("YES\n");
    }
    else
    {
        int firstDigit = number / 10;
        int lastDigit = number % 10;

        if (firstDigit % lastDigit == 0 || lastDigit % firstDigit == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
