#include <stdio.h>
#include <string.h>
int main()
{
    char a [1000];
    char b [1000];
    scanf("%s %s", &a, &b);

    int size_Of_A = strlen(a);
    int size_Of_B = strlen(b);
    printf("%d %d\n", size_Of_A, size_Of_B);

    printf("%s %s", a, b);
    return 0;
}