/*
Given a string s , consisting of alphabets and digits, find the frequency of each digit in the given string.

Input 
a11472o5t6

Output 
0 2 1 0 1 1 1 1 0 0
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[1001];
    scanf("%s",s);
    int arr[10]={0};
    for(int i=0;i<strlen(s);i++)
    {
        if(isdigit(s[i]))
        {
            arr[(int)s[i]-48]+=1;
        }
    }
    for(int i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
