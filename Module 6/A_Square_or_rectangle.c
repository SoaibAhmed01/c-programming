#include <stdio.h>

int main() {
    int tc;
    scanf("%d",&tc);
    while (tc--)
    {
        long long int a, b;
        scanf("%lld %lld", &a, &b);
        if(a==b)printf("Square\n");
        else printf("Rectangle\n");
    }


    return 0;
}
