#include<stdio.h>



int fun(long long int v[], long long int pos, long long int n)
{
    if(pos==n)
        return 0;
    long long int tot=v[pos]+fun(v,pos+1,n);
    return tot;
}

int main()
{
    int n;
    scanf("%d",&n);
    long long int a[n];
    for(int i=0;i<n;i++)scanf("%lld",&a[i]);  
    printf("%lld",fun(a,0,n));
}

