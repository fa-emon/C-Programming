#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);

    int array[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (array[i] > 0)
        {
            array[i] = 1;
            printf("%d ", array[i]);
        }
        else if (array[i] == 0)
        {
            array[i] = 0;
            printf("%d ", array[i]);
        }
        else
        {
            array[i] = 2;
            printf("%d ", array[i]);
        }
    }
    return 0;
}