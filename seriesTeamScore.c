/*
Series Team Score
Two soccer teams A and B play a series of matches over a period of time. In a match, the winning team gets 3 points. If the match ends in a tie (draw) with both teams scoring same goals, then both the teams get one point each. The losing team does not get any point.
The program must accept the goals scored by both team A and B in certain number of matches and print the cumulative scores of team A and B separated by a space.
Input Format:
First line will contain the goals scored by team A, with the goal values separated by a space.
Second line will contain the goals scored by team B, with the goal values separated by a space.
Output Format:
First line will contain the scores of team A and B separated by a space.
Boundary Conditions:
The length of the input with the space separated goals is from 3 to 100.
Example Input/Output 1:
Input:
3 5 1
3 2 0
Output:
7 1
Explanation:
Team A drew the first match and hence both team A and B got one point each.
Team A won both matches two and three and hence got additional 6 points.
So the final score of team A is 7 and team B is 1.
  */

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{

int n,a[100],b[100],ind1=0,ind2=0,k=0,x=0,y=0;
char c;
while(scanf("%d%c",&n,&c)>=1) {
    
    if(k==0)a[ind1++] = n;
    else b[ind2++]=n;
    if(c=='\r')k=1;
}



for(int i=0;i<ind1;i++) {
    if(a[i]==b[i]){
        x+=1;
        y+=1;
    }
    else if(a[i]>b[i]) {
        x+=3;
    }
    else {
        y+=3;
    }
}
printf("%d %d",x,y);
}
