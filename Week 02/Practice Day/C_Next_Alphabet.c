#include <stdio.h>
int main()
{
    char i, character;
    scanf("%c", &character);

    int nextCharacter;

    for(i='a'; i<'z'; i++){
        if((character>='a') && (character<'z')){
        nextCharacter = character + 1;
        }
        else if(character == 'z'){
         nextCharacter = character - 25;
        }
    }
    printf("%c",  nextCharacter);
    return 0;
}