#include <stdio.h>
int main()
{
    int n, i, even_sum = 0, odd_sum = 0;
    scanf("%d", &n);

    int array[n];
    for(i=0; i<n; i++){
        scanf("%d", &array[i]);
    }
    for(i=0; i<n; i++){
        if(array[i] % 2 == 0){
            even_sum = even_sum + array[i];
        }
        else{
            odd_sum = odd_sum + array[i];
        }
    }
    printf("%d %d", even_sum, odd_sum);
    return 0;
}