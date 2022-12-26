/*

Toogle the case of a alphabet in word if cases of all characters is same.

Input : 
Programming is EASY 

Output :
Programming IS easy

*/




#include<stdio.h>
#include<stdlib.h>

char * tooglecase(char *s, char ch)
{
    for(int i=0;i<strlen(s);i++)
    {
        if(ch=='l')
        {
            s[i]=tolower(s[i]);
        }
        else
        {
            s[i]=toupper(s[i]);
        }
    }
    return s;
}

int main()
{
    
    char s[101];
    while(scanf("%s",s)>=1)
    {
        int len=strlen(s);
        int lower=0, upper=0;
        for(int i=0;i<strlen(s);i++)
        {
            if(islower(s[i]))
                lower+=1;
            else
                upper+=1;
        }
        if(lower==len)
        {
            tooglecase(s,'u');
        }
        else if(upper==len)
        {
            tooglecase(s,'l');
        }
        printf("%s ",s);
        
    }
}
