/*
Adamant Kid
An adamant kid keeps on repeating the stuff he wants. Like if the kid wants chocolate he keeps repeating "chocolate". Given the stuff the child is demanding the program must print if the character in two given positions X, Y is same or not by printing YES or NO.
Input Format:
First line will contain the name of the stuff as a string value S.
Second line will contain two integer values X, Y denoting the position of the characters. The values of X and Y are separated by a space.
Output Format:
First line will contain YES or NO
Boundary Conditions:
Length of S is from 2 to 100.
Sample Input/Output:
Example 1:
Input:
icecream
4 10
Output:
YES
Explanation:
As the kid keeps on repeating icecream, the 10th position character will also be c in icecreamicecream.
As the characters in 4th and 10th position are same (that is c) the output is YES
Example 2:
Input:
cake
2 12
Output:
NO
Explanation:
When cake is repeated like cakecakecakecake, the character in 12th position is e which is NOT equal to the character a in 2nd position. Hence the output is NO.
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    char s[101];
    int x,y;
    scanf("%s\n%d %d",s,&x,&y);
    int l = strlen(s);
    int a=(y%l==0)?l:y%l;
    if(s[(x%l)-1]==s[a-1]) {
        printf("YES");
    }
    else {
        printf("NO");
    }
}
