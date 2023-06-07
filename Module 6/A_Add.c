#include <stdio.h>
#include <string.h>


int sum(int a,int b)
{
    return a+b;
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int summ=sum(a,b);
    printf("%d",summ);

    return 0;
}