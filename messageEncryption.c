/*
Message Encryption
To encrypt messages Jil will first decide on the number of columns C to use. Then Jil will pad the message with letters chosen randomly so that they form a rectangular matrix. Finally Jil will write down the message navigating the rows from left to right and then from right to left.
The program must accept the encrypted message M as input and then extract and print the original message (along with any additional padding letters) from the encrypted one based on the value of C.
Boundary Conditions:
Length of M is from 4 to 200.
2 <= C <= 20
Input Format:
First line will contain the string value of the encrypted message M.
Second line will contain the integer value of the column used for the encryption.
Output Format:
First line will contain the string value of the original message (along with any additional padding letters)
Sample Input/Output:
Example 1:
Input:
midinadiazne
3
Output:
madeinindiaz
Explanation:
m i d
a n i
d i a
e n z
Here z is the padding letter. The navigating across the rows mid (left to right) ina (right to left) and so on we come up with the encrypted message midinadiazne.
Example 2:
Input:
loaesfbnaiordilertenrdhdw
5
Output:
lionroaredandthebirdsflew
Explanation:
l o a e s
i a n b f
o r d i l
n e t r e
r d h d w
Here there are no padding letters. The navigating across the rows left to right and then from right to left we get loaesfbnaiordilertenrdhdw
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    
    char s[201];
    int n,l,r=0;
    scanf("%s%n\n%d",s,&l,&n);
    int a[l/n][n];
    for(int i=0;i<l;i+=n) {
        for(int j=0;j<n;j++) {
            if(i%2==0) {
                a[r][j]=s[i+j];
            }
            else {
                a[r][j]=s[i+(n-j-1)];
            }
        }
        r++;
    }
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<r;j++) {
            printf("%c",a[j][i]);
        }
    }
} 
