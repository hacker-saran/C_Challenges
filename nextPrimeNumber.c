/*

NEXT SMALLEST PRIME NUMBER
  
Input  :
8 
Output :
11

  
*/

#include<stdio.h>
#include<stdlib.h>

int isprime(unsigned long long int n)
{
    if(n>1)
    {
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                return 0;
            }
        }
        return 1;
    }
    return 0;
}

int main()
{
    unsigned long long int n;
    scanf("%llu",&n);
    while(!isprime(++n));
    printf("%llu",n);
    
}
