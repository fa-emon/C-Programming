#include <stdio.h>
int main()
{
    char letter;
    scanf("%c", &letter);
    if(letter>='a' && letter<='z'){
        int upperCase = letter - 32;
        printf("%c\n", upperCase);
    }
    else if(letter>='A' && letter<='Z'){
        int lowerCase = letter + 32;
        printf("%c\n", lowerCase);
    }
    else{
        printf("Not a upperCase or lowerCase letter");
    }
    return 0;
}