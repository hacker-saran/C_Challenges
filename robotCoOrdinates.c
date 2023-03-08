/*
Robot co-ordinates
The initial x and y co-ordinate values of a Robot are passed as the input.
The rest of the input values are the directions in which the Robot moves along with the distance in that direction.
The directions are denoted by N, E, S, W for North, East, South and West.
The program should print the final x and y co-ordinates of the Robot.
The input will be a single string value with the above details separated by one or more spaces.
Boundary Conditions:
The length of the input string will be less than 100.
Example Input/Output:
If the input string is x2 y1 N3 E2 S1 the output must be x4 y3
If the input string is x-2 y3 N1 W3 the output must be x-5 y4
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{

int x,y,n,e,s,w;
char dir;
int val;
while(scanf("%c%d ",&dir,&val)>=1) {
    if(dir=='x')x=val;
    else if(dir=='y')y=val;
    else if(dir=='N')y+=val;
    else if(dir=='S')y-=val;
    else if(dir=='E')x+=val;
    else if(dir=='W')x-=val;
}
printf("x%d y%d",x,y);

}
