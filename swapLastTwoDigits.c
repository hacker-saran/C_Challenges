/*
The program must accept two integers X and Y as the input. The program must swap the last two digits of X with the last two digits of Y. Then the program must print their product as the output.
Boundary Condition(s):
10 <= X, Y <= 10^4
Input Format:
The first line contains X and Y separated by space.
Output Format:
The first line contains the product as per the given condition.
Example Input/Output 1:
Input:
34 123
Output:
3082
Explanation:
The last two digits in both integers are swapped to get 23 and 134.
The product of the modified integers is 23 * 134 = 3082
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int t=x;
    x = (x/100)*100+(y%100);
    y = (y/100)*100+(t%100);
    printf("%d",x*y);
    
}   
