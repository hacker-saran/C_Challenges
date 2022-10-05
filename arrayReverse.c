/*

Array Reverse 

Input 
6
16 13 7 2 1 12 
Output 
12 1 2 7 13 16 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    int x=0,y=num-1;
    while(x<y)
    {
        int t = *(arr + x);
        *(arr+x) = *(arr+y);
        *(arr+y) = t;
        x++;y--;
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
