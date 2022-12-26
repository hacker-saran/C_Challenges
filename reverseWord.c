/*
String - Reverse Word 

A String S is passed as the input. The program must reverse the order of the words in the string and print. 

Input : 
Hii, I there for you..! 

Output :
you..! for there I Hii,


*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[101];
    scanf("%[^\n]",s);
    char temp[100],* tp= temp;
    char arr[20][101];
    int ind=0;
    for(int i=0;i<=strlen(s);i++)
    {
        if(*(s+i)==' ' || *(s+i)=='\0')
        {
            *tp='\0';
            strcpy(arr[ind++],temp);
            tp=temp;
        }
        else
        {
            *tp = *(s+i);
            tp++;
        }
    }
    for(int i=ind-1;i>=0;i--)
    {
        printf("%s ",arr[i]);
    }
}
