/*
Longest Palindromic Substring Length
Ram likes palindromic words. He reads a word and wants to find the longest palindromic substring in the given word. The word is given as the input to the program. Help Ram by printing the length of the longest palindromic substring in the given word as the output.
Boundary Condition(s):
1 <= Length of the word <= 1000
Input Format:
The first line contains the word.
Output Format:
The first line contains the length of the longest palindromic substring.
Example Input/Output 1:
Input:
management
Output:
3
Explanation:
There are two palindromic substring values with length 3 in management.
Example Input/Output 2:
Input:
triangle
Output:
1
*/

#include<stdio.h>
#include<stdlib.h>

int isPalindrome(char * s) {
    int i=0,j=strlen(s)-1;
    while(i<=j) {
        if(s[i]!=s[j]) {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

int main()
{
    char s[1001];
    scanf("%s",s);
    int l = strlen(s), max=0;
    for(int i=0;i<l;i++) {
        for(int j=i+1;j<=l;j++) {
            char res[1001],*sptr=res;
            for(int k=i;k<j;k++) {
                *sptr++=s[k];
            }
            *sptr='\0';
            
            if(isPalindrome(res) && strlen(res)>max) {
                max = strlen(res);
            }
        }
    }
    printf("%d",max);
}
