/*
Remove Odd or Even Position Digits
The program must accept an integer N as the input. The program must remove the digits of N  in odd positions if N is odd. Else the program must remove the digits in even positions of N. Finally, the program must print the modified N as the output.
Boundary Condition(s):
1 <= N <= 10^18
Input Format:
The first line contains N.
Output Format:
The first line contains the modified N.
Example Input/Output 1:
Input:
245872
Output:
257
Explanation:
245872 is an even integer so all the digits at even positions are removed to get 257.
Example Input/Output 2:
Input:
1009
Output:
9
*/


#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    unsigned long long int n,res=0,l,p;
    scanf("%llu",&n);
    
    l = log10(n);
    p = pow(10,l);
    
    int ptr=1;
    int odd = (n%2)?1:0;
    
    while(ptr<=l+1) {
        if((odd && ptr%2==0)||(!odd && ptr%2==1)) {
            res = res*10+(n/p);
        }
        n%=p;
        p/=10;
        ptr++;
    }
    
    printf("%llu",res);

}
