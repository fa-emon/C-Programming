#include <stdio.h>
int main()
{
    int n, i;
    long long int sum=0;
    scanf("%d", &n);

    int array[n];
    for(i=0; i<n; i++){
        scanf("%d", &array[i]);
    }
    for(i=0; i<n; i++){
        if(array[i] >= 0){
        sum = sum + array[i];
        }
        else{
            sum = sum + array[i];
        }
    }
    printf("%ld\n", sum);
    return 0;
}