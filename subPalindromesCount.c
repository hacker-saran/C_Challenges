/*

Sub Palindromes Count 

Input : 
everst 
Output:
1

*/


#include<stdio.h>
#include<stdlib.h>

int ispalin(char*a, char*b)
{
    
    while(a<=b)
    {
        if(*a!=*b)
        {
            return 0;
        }
        a++;
        b--;
    }
    return 1;
}

int main()
{
    char s[201];
    scanf("%s",s);
    int count = 0;
    for(int i=0;i<strlen(s);i++)
    {
        for(int j=i+1;j<strlen(s);j++)
        {
            if(ispalin(&s[i],&s[j]))
            {
                count++;
            }
        }
    }
    printf("%d",count);
}
