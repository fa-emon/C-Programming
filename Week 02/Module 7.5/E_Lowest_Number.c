#include <stdio.h>
#include <limits.h>
int main()
{
    int n, i;
    scanf("%d", &n);

    int array[n];
    for(i=0; i<n; i++){
        scanf("%d", &array[i]);
    }

    int min = INT_MAX, pos;
    for(i=0; i<n; i++){
        if( array[i] < min){
            min = array[i];
            pos = i + 1;
        }
    }
    printf("%d %d", min, pos);
    return 0;
}