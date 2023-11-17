#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if ((a<b && a<c) && (c>a && c>b))
    {
        printf("%d %d", a, c);
    }
    else if ((c<a && c<b) && (a>b && a>c))
    {
        printf("%d %d", c, a);
    }
    else if ((a<b && a<c) && (b>a && b>c))
    {
        printf("%d %d", a, b);
    }
    else if ((a>b && a>c) && (b<a && b<c))
    {
        printf("%d %d", a, b);
    }
    else if ((c>a && c>b) && (b<a && b<c))
    {
        printf("%d %d", c, b);
    }
    else if ((b>a && b>c) && (c<a && c<b))
    {
        printf("%d %d", b, c);
    }
    return 0;
}