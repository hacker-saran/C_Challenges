/*
Characters at Multiples of K
The program must accept a string S and an integer K as the input. The program must print the characters in S which are present at the positions represented by the multiples of K in a circular manner until the last character is encountered as the output.
Note: The multiple of K will eventually point to the last character of S. Hence infinite loop will not occur.
Boundary Condition(s):
1 <= Length of S <= 100
1 <= K <= 100
Input Format:
The first line contains the string S and K separated by a space.
Output Format:
The first line contains the characters at multiples of K.
Example Input/Output 1:
Input:
orange 4
Output:
nre
Explanation:
The character present at the 4th position is n. So n is printed.
The character present at the 2nd position is r (in a circular manner the 8th position is 2nd position in S). So r is printed.
The character present at the 6th position (4 positions after the previous 2nd position) is e. So e is printed.
Here we have reached the last character and hence the iteration ends.
Example Input/Output 2:
Input:
abbrevation 5
Output:
eoribtbaavn

*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[1001];
    int k;
    scanf("%s %d",s,&k);
    int l = strlen(s);
    int i=-1;
    while(i!=l-1) {
        i+=k;
        if(i>=l) {
            i=i%l;
        }
        printf("%c",s[i]);
    }
}
