#include<stdio.h>
#include<stdlib.h>
/* COUNT OF ARTICLES  (a, an, the) */



int main()
{
    char s[1001];
    int c=0;
    while(scanf("%s",s)>=1)
    {
        int alpha=0,x=0;
        for(int i=0;i<strlen(s);i++)
        {
            if(isalpha(s[i]))alpha++;
            if(x==0)
            {
                if(s[i]=='a')
                {
                    x=1;
                }
                if(s[i]=='a' && s[i+1]=='n')
                {
                    x=2;
                }
                if(s[i]=='t' && s[i+1]=='h' && s[i+2]=='e')
                {
                    x=3;
                }
            }
            
        }
        if(x!=0 && x==alpha)
        {
            c++;
        }
    }
    printf("%d",c);
}
