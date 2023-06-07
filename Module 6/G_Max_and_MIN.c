#include <stdio.h>
#include <string.h>


void sum(int n,int a[],int *min,int *mx)
{
    int *mx=a[0],*min=a[0],temp;
    for(int i=0;i<n;i++)
    {
        if(a[i]>*mx) *mx=a[i];
        if(a[i]<*min) *min=a[i];
        
    }
}

int main()
{
    int n,min,mx;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    sum(n,a,&min,&mx);

    return 0;
}