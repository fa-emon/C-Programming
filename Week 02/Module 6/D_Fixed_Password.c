#include <stdio.h>
int main()
{
    int i, value;
    int password = 1999;
    for(i=1000; i<=9999; i++){
        scanf("%d", &value);
        if(value == password){
            printf("Correct\n");
            break;
        }
        else{
            printf("Wrong\n");
        }
    }  
    return 0;
}