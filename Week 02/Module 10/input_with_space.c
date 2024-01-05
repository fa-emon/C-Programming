#include <stdio.h>
#include <string.h>
int main()
{
    // char a[100];
    // gets(a);
    // printf("%s", a);

    char a[100];
    fgets(a, 19, stdin);
    a[17] = '\0'; // er jonne enter print hoy nai.
    printf("%s", a);
    return 0;
}