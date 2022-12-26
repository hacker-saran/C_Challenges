/*

Contains Unique Elements or Not

Input  : 
5 
1 4 3 1 2 
Output :
NO

*/

#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int value, numberCount[1001] = {0};
    for(int ctr = 1; ctr <= N; ctr+=1){
        scanf("%d",&value);
        if(numberCount[value]++ == 1){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
