#include <stdio.h>
int main()
{
    char letter;
    scanf("%c", &letter);

    char lowerCase = tolower(letter);
    char upperCase = toupper(letter);

    if(islower(letter)){
        printf("%c\n", upperCase);
    }
    else if(isupper(letter)){
        printf("%c\n", lowerCase);
    }
    return 0;
}