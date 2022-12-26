/*

Left Right Odd Count

An array of N integers is given as a input to the program. For each integer the program must count the odd integers 
on the left side is equal to the count of the odd integers on the right side. Else the program must print -1.

Input:
4
1 4 3 8
Output:
-1 4 -1 -1
*/

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],oddCount[n],tcount=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
        oddCount[i]=tcount;
        if(a[i]%2)tcount++;
    }
    int left,right;
    for(int i=0;i<n;i++){
        left = oddCount[i];
        right = tcount-oddCount[i];
        if(a[i]%2)
        {
            right-=1;
        }
        if(left==right)
        {
            printf("%d ",a[i]);
        }
        else
        {
            printf("-1 ");
        }
    }

}
