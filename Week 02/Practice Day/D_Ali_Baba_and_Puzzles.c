#include <stdio.h>
int main()
{
    long long int a, b, c, result;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &result);

    if(a+b-c==result || a-b+c==result || a+b*c==result || a*b+c==result || a*b-c==result || a-b*c==result){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}