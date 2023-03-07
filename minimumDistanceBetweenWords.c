/*
Minimum Distance Between Words [AMAZON]
A string S is passed as the input. Two words W1 and W2 which are present in the string S are also passed as the input. The program must find the minimum distance D between W1 and W2 in S (in forward or reverse order) and print D as the output.
Input Format:
The first line will contain S.
The second line will contain W1.
The third line will contain W2.
Output Format:
The first line will contain D - the minimum distance between W1 and W2 in S.
Boundary Conditions:
Length of S is from 5 to 200.
Example Input/Output 1:
Input:
the brown quick frog quick the
the
quick
Output:
1
Explanation:
quick and the are adjacent as the last two words. Hence distance between them is 1.
Example Input/Output 2:
Input:
the quick the brown quick brown the frog
quick
frog
Output:
3
  */

#include <stdio.h>
 
int main()
{
    char s[1001],arr[100][101],w1[101],w2[101];
    int ind=0,min=1001;
    while(scanf("%s",s)>=1) {
        strcpy(arr[ind++],s);
    }
    strcpy(w1,arr[ind-2]);
    strcpy(w2,arr[ind-1]);
    ind-=2;
    for(int i=0;i<ind;i++) {
        if(strcmp(arr[i],w1)==0) {
            for(int j=i+1;j<ind;j++) {
                if(strcmp(arr[j],w2)==0) {
                    if(abs(j-i)<min) {
                        min = abs(j-i);
                    }
                }
            }
        }
        if(strcmp(arr[i],w2)==0) {
            for(int j=i+1;j<ind;j++) {
                if(strcmp(arr[j],w1)==0) {
                    if(abs(j-i)<min) {
                        min = abs(j-i);
                    }
                }
            }
        }
    }
    printf("%d",min);
    
}
