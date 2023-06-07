#include<stdio.h>
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int n;
        scanf("%d",&n);
        do
        {
            /* code */
            printf("%d ",n%10);
            n=n/10;
        } while (n!=0);
        printf("\n");
        
    }
    return 0;
}