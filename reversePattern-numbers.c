/*
Reverse Pattern Printing - Numbers
Based on the input value of N, the program must print the pattern described below.
Input Format:
First line will contain the value of N.
Output Format:
N lines will contain the number pattern as described below with each value separated by a single space.
Boundary Conditions:
1 <= N <= 50
Example Input/Output 1:
Input:
5
Output:
15 10 6 3 1
14 9 5 2
13 8 4
12 7
11
Example Input/Output 2:
Input:
3
Output:
6 3 1
5 2
4
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    scanf("%d",&n);
    int s = (n*(n+1))/2;
    for(int i=1;i<=n;i++) {
        int x = s-i+1;
        for(int j=1;j<=n-i+1;j++) {
            printf("%d ",x);
            x-=n-j+1;
        }
        printf("\n");
    }

}
