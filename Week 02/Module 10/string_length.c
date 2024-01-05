#include <stdio.h>
#include <string.h>
int main()
{
    // {.....Using strlen.....}
    char a[100];
    scanf("%s", &a);
    int size = strlen(a);
    printf("%d", size);

    // {.....Using while loop.....}
    // char a[100];
    // scanf("%s", &a);

    // int count=0;
    // int i=0;
    // while (a[i]!= '\0')
    // {
    //     count++;
    //     i++;
    // }
    // printf("%d", count);
    // return 0;


    // {.....Using for loop.....}
    // char a[100];
    // scanf("%s", &a);

    // int count = 0;
    // for (int i = 0; a[i] != '\0'; i++)
    // {
    //     count++;
    // }
    // printf("%d", count);
    // return 0;
}