/*
The program must accept an integer N as the input. The program must print the maximum possible sum S obtained by adding the two digit integers formed from the digits of N as the output. If the number of digits is odd, then one digit must be excluded from the sum as it is not possible to form two digit integer.
Boundary Condition(s):
10 <= N <= 10^9
Input Format:
The first line contains the value of N.
Output Format:
The first line contains the value of S.
Example Input/Output 1:
Input:
1452
Output:
93
Explanation:
Here the formed two digit integers are 51 and 42. So their sum is 93.
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[10001];
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++) {
        for(int j=i+1;j<strlen(s);j++) {
            if(s[i]>s[j]) {
                char ch = s[i];
                s[i] = s[j];
                s[j] = ch;
            }
        }
    }
    for(int i=0;i<strlen(s);i++)
    {
        printf("%c ",s[i]);
    }
    char *lptr = s,*rptr=s+strlen(s)-1;
    if((strlen(s)&1))
    {
        lptr++;
    }
    int sum=0;
    while(lptr<rptr) {
        sum+=((*rptr)-'0')*10 + ((*lptr)-'0');
        rptr--;
        lptr++;
    }
    printf("%d*",sum);

}
