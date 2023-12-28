#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);

    int array[n];
    for(i=0; i<n; i++){
        scanf("%d", & array[i]);
    }

    int x, v, update;
    scanf("%d %d", &x, &v);

    if(x >= 0 && x < n){
        array[x] = v;
    }

    for(i=n-1; i>=0; i--){
        printf("%d ", array[i]);
    }
    return 0;
}