#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
   int prsum=0,scsum=0;
   for(int i=0;i<n;i++)
   {
        prsum+=a[i][i];
        scsum+=a[i][n-i-1];
   }
   int diff=abs(prsum-scsum);
   printf("%d",diff);

}

