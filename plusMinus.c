/*
Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero. 
Print the decimal value of each fraction on a new line with  places after the decimal.

Print the following 3 lines, each to  decimals:

proportion of positive values
proportion of negative values
proportion of zeros 

Input :
6
-4 3 -9 0 4 1 
Output :
0.500000
0.333333
0.166667
*/ 

#include<stdio.h>

void plusMinus(int arr_count, int* arr) {
    
    int pcount=0,zcount=0,ncount=0;
    for(int i=0;i<arr_count;i++)
    {
        if(arr[i]<0)ncount++;
        else if(arr[i]>0)pcount++;
        else zcount++;
    }
    printf("%.6lf \n %.6lf \n %.6lf",(double)pcount/arr_count,(double)ncount/arr_count,(double)zcount/arr_count);

}

int main()
{
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d ",&arr[i]);
  }
  plusMinus(n,arr);
}
