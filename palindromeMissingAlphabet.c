/*

String S which is a palindrome is passed as the input. But just one alphabet A is missing in S. The program must print the missing alphabet A.
Note: The FIRST alphabet of S will always be present.

Input Format:
The first line contains S.
Output Format:
The first line contains the missing alphabet A.
Boundary Conditions:
The length of the input string S is between 3 to 100.
The FIRST alphabet of S will always be present.

Example Input/Output 1:
Input:
malayaam
Output:
l
Example Input/Output 2:
Input:
abcddcb
Output:
a

*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[101];
    scanf("%s",s);
    int i=0, j=strlen(s)-1;
    while(i<j) {
        if(s[i]!=s[j])
        {
            if(s[i+1]==s[j]) {
                printf("%c",s[i]);
                return 0;
            }
            if(s[j-1]==s[i]) {
                printf("%c",s[j]);
                return 0;
            }
        }
        i++;
        j--;
    }
}
