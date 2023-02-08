/*
if N odd then swap last two digits else remove last two digits

*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int l = log10(n);
    int p = pow(10,l-1);
    if(n%2==1) {
        n = (n/100*100) + (n%10*10) + ((n%100)/10); 
    }
    else {
        n = n/100;
    }
    printf("%d",n);
}
