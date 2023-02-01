#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    char s[101];
    int d ,ind=0;
    scanf("%s\n%d",s,&d);
    char days[][101] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
    for(int i=0;i<7;i++)
    {
        if(strcmp(days[i],s)==0)
        {
            ind = i;
        }
    }
    int r = (d%7)+ind-1;
    printf("%s*",days[r%7]);
}
