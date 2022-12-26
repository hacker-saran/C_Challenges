/*

Input :
Hi how are you 

Output :
Hi woh era you

*/



#include<stdio.h>
#include<stdlib.h>

char * reverseWord(char *str)
{
    int len=strlen(str);
    for(int i=0,j=len-1;i<j;i++,j--)
    {
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    return str;
}

int main()
{
    char s[1000];
    scanf("%[^\n]s",s);
    int len=strlen(s), count=0;
    char temp[1000],*tp=temp;
    for(int i=0;i<len;i++)
    {
        if(s[i]==' ')
        {
            *tp='\0';
            if(count==0)
            {
                printf("%s ",temp);
                count=1;
            }
            else
            {
                printf("%s ",reverseWord(temp));
            }
            temp[0]='\0';
            tp=temp;
        }
        else
        {
            *tp++=s[i];
        }
        if(i==len-1)
        {
            *tp='\0';
            printf("%s",temp);
        }
    }
    
}
