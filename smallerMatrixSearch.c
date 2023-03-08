/*
Smaller Matrix Search [ZOHO]
A bigger NxN matrix is passed as the input. Also a smaller MxM matrix is passed as input. The program must print TRUE if the smaller matrix can be found in the bigger matrix. Else the program must print FALSE.
Input Format:
First line will contain the value of N.
Second line will contain the value of M.
Next N lines will contain the values in the N*N matrix with each value separated by one or more space.
Next M lines will contain the values in the M*M matrix with each value separated by one or more space.
Output Format:
First line will contain the string value TRUE or FALSE
Boundary Conditions:
3 <= N <= 20
2 <= M <= N
Example Input/Output 1:
Input:
3
2
4 5 9
1 3 5
8 2 4
3 5
2 4
Output:
TRUE
Example Input/Output 2:
Input:
3
2
4 5 9
1 3 5
8 2 4
4 5
1 4
Output:
FALSE
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int m,n;
    scanf("%d\n%d\n",&n,&m);
    int a[n][n],b[m][m];
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            scanf("%d ",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++) {
        for(int j=0;j<m;j++) {
            scanf("%d ",&b[i][j]);
        }
    }
    for(int i=0;i<=n-m;i++) {
        for(int j=0;j<=n-m;j++) {
            int c=0;
            for(int x=i;x<i+m;x++) {
                for(int y=j;y<j+m;y++) {
                    
                    if(a[x][y]==b[x-i][y-j])c++;
                }
            }
            if(c==m*m) {
                printf("TRUE");
                return 0;
            }
        }
    }
    printf("FALSE*");
}
