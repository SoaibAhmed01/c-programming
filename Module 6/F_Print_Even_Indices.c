#include<stdio.h>


void fun(int a[],int n,int idx)
{
    if(idx<0)return;
    if(idx%2==0)printf("%d ",a[idx]);
    fun(a,n,idx-1);
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    fun(a,n,n-1);
}
