#include <stdio.h>
int main()
{
    char letter;
    scanf("%c", &letter);

    if((letter>='a' && letter<='z') || (letter>='A' && letter<='Z')){
        if(letter>='A' && letter<='Z'){
            printf("ALPHA\nIS CAPITAL");
        }
        else{
            printf("ALPHA\nIS SMALL");
        }
    }
    else if(letter>= '0' && letter<= '9' ){
        printf("IS DIGIT");
    }
    else{
        printf("Garbage Value");
    }

    return 0;
}