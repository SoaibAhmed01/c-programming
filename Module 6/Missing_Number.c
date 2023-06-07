#include <stdio.h>

int main() {
    int tc;
    scanf("%d",&tc);
    while (tc--)
    {
        long long int s,a,b,c;
        scanf("%lld %lld %lld %lld",&s,&a,&b,&c);
        printf("%lld\n",s-(a+b+c));
    }
    
    return 0;
}
