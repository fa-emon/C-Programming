#include <stdio.h>
int main()
{
    long long int eye, mouth, body, count = 0;
    scanf("%lld %lld %lld", &eye, &mouth, &body);

    if(eye==0 || body==0){
        printf("0\n");
    }
    else{
        long long int minimum = eye;
        if(mouth<minimum){
            minimum=mouth;
        }
        else if(body<minimum){
            minimum=body;
        }

        eye= eye-minimum;
        mouth= mouth-minimum;
        body=body-minimum;
        count = count + minimum;

        if(eye/2 <body){
            count = count + eye/2;
        }
        else{
            count = count + body;
        }
        printf("%lld\n", count);
    }
    return 0;
}