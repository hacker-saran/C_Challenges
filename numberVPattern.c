/*

NUMBER V PATTERN
Input  :
5 

Output :
1***5
*2*4*
**3**

*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    int n;
    scanf("%d",&n);
    int k=n;
    for(int i=0;i<=n/2;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j==i) printf("%d",i+1);
            else if(j==n-i-1) printf("%d",k--);
            else printf("*");
        }
        printf("\n");
    }

}
