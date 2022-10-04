/*
An array of N integers is given as a input to the program. For each integer the program must count the odd integers 
on the left side is equal to the count of the odd integers on the right side. Else the program must print -1.

Input:
4
1 4 3 8
Output:
-1 4 -1 -1
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d ",&a[i]);
    
    for(int i=0;i<n;i++)
    {
        int left=0,right=0;
        for(int j=0;j<n;j++)
        {
            if(j<i && a[j]%2)
            {
                left++;
            }
            else if(j>i && a[j]%2)
            {
                right++;
            }
        }
        if(left==right)
        {
            printf("%d ",a[i]);
        }
        else
        {
            printf("-1 ");
        }
    }

}
