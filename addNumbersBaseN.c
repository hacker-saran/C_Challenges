/*
Two numbers X and Y are provided with reference to base N. Add the numbers and print their sum with reference to base 10.
Input Format:
First line will contain the value of N.
Second line will contain X and Y separated by one or more spaces.
Output Format:
First line will contain the sum of X and Y to the base 10.
Boundary Conditions:
1 <= N <= 10
Example Input/Output 1:
Input:
2
1010 11
Output:
13
Explanation:
1010 to the base 2 is 10. 11 to the base 2 is 3.
Hence the sum is 10+3 = 13.
Example Input/Output 2:
Input:
3
11 201
Output:
23
Explanation:
11 to the base 3 is 4. 201 to the base 3 is 19.
Hence the sum is 23
*/
#include <bits/stdc++.h>
 
using namespace std;

int convertByBase(int n,int b) {
    int res=0,p=1;
    while(n) {
        res += (n%10)*p;
        p*=b;
        n/=10;
    }
    return res;
}

int main(int argc, char** argv)
{

    int base;
    int x,y;
    scanf("%d\n%d %d",&base,&x,&y);
    printf("%d",convertByBase(x,base)+convertByBase(y,base));
}
