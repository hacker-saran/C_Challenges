/*
Reverse and remove letters in vowel positions
Sharon does not like vowels. So she wants to remove vowels from any string. But her friend Jennie loves vowels and wants to retain vowels in as string. So both discuss and agree to the following condition.
- They will reverse the string value and then remove the letters in the positions of the vowels in the original string.
Help them by writing the program implementing the above condition.
Input Format:
First line will contain the string value S.
Output Format:
First line will contain the reversed string value with the letters in the positions of vowels in the original string removed.
Constraints:
Length of String S is from 2 to 50.
Sample Input/Output:
Example 1:
Input:
environment
Output:
nenrine
Explanation:
The reversed string value is tnemnorivne.
The vowels position in the original string are e-1 i-4 o-6 e-9
Hence after removing the letters in the positions 1,4,6,9 the string is nenrine
Example 2:
Input:
pond
Output:
dop
Explanation:
The reversed string value is dnop.
The vowels position in the original string are o-2
Hence after removing the letters in the positions 2 the string is dop
*/

#include <bits/stdc++.h>
 
using namespace std;

int isVowel(char c) {
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}

int main(int argc, char** argv)
{
    char s[51];
    int l;
    scanf("%s%n",s,&l);
    for(int i=0;i<l;i++) {
        if(!isVowel(s[i])) {
            printf("%c",s[l-i-1]);
        }
    }


}
