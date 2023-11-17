#include <stdio.h>
int main()
{
    int money;
    scanf("%d", &money);
    if (money > 1000)
    {
        printf("I will buy Punjabi\n");
        money -= 1000;
        if (money >= 500)
        {
            printf("I will buy new shoes\n");
            if (money >= 500)
            {
                printf("Alisa will buy new shoes\n");
            }
        }
    }
    else
    {
        printf("Bad luck!\n");
    }
    return 0;
}