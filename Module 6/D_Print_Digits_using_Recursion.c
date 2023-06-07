#include<stdio.h>

void fun(int n)
{
    if(n==0)return;
    int x=n%10;
    fun(n/10);
    printf("%d ",x);
}

int main()
{
    int tc;
    scanf("%d",&tc);
    while (tc--)
    {
        int n;
        scanf("%d",&n);
        fun(n);
        printf("\n");
    }
    
    


    
    return 0;
}

