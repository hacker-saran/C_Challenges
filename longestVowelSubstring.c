/*

The program must accept a string S as the input. The program must print the length of the longest substring containing vowels only as the output.
Boundary Condition(s):
3 <= Length of String S <= 1000
Input Format:
The first line contains the value of string S.
Output Format:
The first line contains the length of the longest sub-string containing vowels.
Example Input/Output 1:
Input:
abcaac
Output:
2
Explanation:
The length of the substring containing the vowel 'a' is 1.
But the length of the substring containing the vowels 'aa' is 2.
So the length of the longest substring is 2.
Example Input/Output 2:
Input:
eoolloooeklkee
Output:
4

*/
 
#include<stdio.h>
#include<stdlib.h>

int isvowel(char ch) {
    return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
}

int main()
{
    char s[1001];
    scanf("%s",s);
    int max=0, c=0;
    for(int i=0;i<strlen(s);i++) {
        if(isvowel(s[i])) {
            c++;
        }
        else {
            c=0;
        }
        if(c>max) {
            max = c;
        }
    }
    printf("%d",max);
}
