


#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[1001],ind=0;
    for(int i=1;i<=n;i++) {
        if(n%i==0) {
            arr[ind++] = i;
        }
    }
    for(int i=0;i<ind;i++) {
        for(int j=1;j<=arr[i];j++) {
            if(arr[i]%j==0)
                printf("%d ",j);
        }
        printf("\n");
    }

}\
